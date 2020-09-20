/* 
 * File:   servos.c
 * Author: dan1138
 *
 * Created on September 20, 2020, 11:38 AM
 * 
 * Description:
 * 
 *  This code implements pulses to control hobby 
 *  class servo motors that accept a control pulse 
 *  between 0.5 to 2.5 milliseconds with a mid
 *  point selected with 1.5 millisecond pulse.
 * 
 *  The Servo1_SetPosition() function accept 
 *  a floating point argument between 
 *  -90.0 and +90.0 degrees.
 * 
 * 
 *  For the PIC18F architecture it seems best that
 *  the TIMER2 ISR be the only high priority ISR and
 *  that the high priority interrupt is never disabled.
 *
 *                         PIC18F25K83 
 *                  +---------:_:---------+
 *     MCLRn     -> :  1 MCLR      PGD 28 : <> RB7 PGD
 *     POT   RA0 <> :  2 AN0       PGC 27 : <> RB6 PGC
 *           RA1 <> :  3 AN1       RP8 26 : <> RB5 
 *           RA2 <> :  4 AN2       RP7 25 : <> RB4 
 *           RA3 <> :  5 AN3       RP7 24 : <> RB3 LED_DS4
 *           RA4 <> :  6 AN4       RP5 23 : <> RB2 LED_DS3
 *           RA5 <> :  7 AN5       RP4 22 : <> RB1 LED_DS2
 *           VSS -> :  8 VSS       RP3 21 : <> RB0 LED_DS1
 *   20.0MHz RA7 <> :  9 OSC1          20 : <- VDD 
 *   20.0MHz RA6 <> : 10 OSC2          19 : <- VSS 
 * 32.768KHz RC0 <> : 11 SOSCO    RP18 18 : <> RC7 
 * 32.768KHz RC1 <> : 12 SOSCI    RP17 17 : <> RC6 RXD
 *    SERVO1 RC2 <> : 13 AN11     RP16 16 : <> RC5 TXD
 *    SERVO2 RC3 <> : 14 RP14     RP15 15 : <> RC4 SERVO3
 *                  +---------------------+
 *                          DIP-28
 */

#include "mcc_generated_files/mcc.h"
#include "servos.h"

#define SERVO_UPDATE_HZ (50ul)
#define TIMER2_CLOCK_HZ (78125ul)
#define TIMER2_COUNTS_PER_PERIOD (255ul)
#define TIMER2_INTERUPTS_IN_20_MS (TIMER2_CLOCK_HZ/(TIMER2_COUNTS_PER_PERIOD*SERVO_UPDATE_HZ))
#define PWM_OFFSET ((TIMER2_CLOCK_HZ*4.0*0.5)/1000.0) /* 0.5 milliseconds offset */
#define PWM_SPAN   ((TIMER2_CLOCK_HZ*4.0*2.0)/1000.0) /* 2.0 milliseconds span  */

/* Private data */
static volatile uint16_t PwmServo_1;
static volatile uint16_t PwmServo_2;
static volatile uint16_t PwmServo_3;

static volatile uint16_t Position_Servo_1;
static volatile uint16_t Position_Servo_2;
static volatile uint16_t Position_Servo_3;
/*
 * Update the servo position pulses.
 * 
 * This is an interrupt call back so remember
 * the code executes in an ISR context.
 * 
 * DO NOT SPIN WAITS!
 * DO NOT CALL FUNCTION THAT BLOCK!
 * 
 * Remember that the TIMER2 interrupt asserts 
 * every 3264 microseconds with FOSC at 20 MHz 
 * so keep this code fast.
 */
static void TMR2_ServoInterruptHandler(void)
{
    static uint8_t TMR2_InterruptIn20ms = TIMER2_INTERUPTS_IN_20_MS;
    
    if(TMR2_InterruptIn20ms) 
    {
        if(--TMR2_InterruptIn20ms)
        {
                PWM5_LoadDutyValue(PwmServo_1);
                PWM6_LoadDutyValue(PwmServo_2);
                PWM7_LoadDutyValue(PwmServo_3);
                PwmServo_1 = 0;
                PwmServo_2 = 0;
                PwmServo_3 = 0;
        }
        else
        {
            /* Restart servo the pulse */
            PwmServo_1 = Position_Servo_1;
            PwmServo_2 = Position_Servo_2;
            PwmServo_3 = Position_Servo_3;
            TMR2_InterruptIn20ms = TIMER2_INTERUPTS_IN_20_MS;
        }
    }
    else
    {
        TMR2_InterruptIn20ms = TIMER2_INTERUPTS_IN_20_MS;
    }
}
/*
 * Initialize servo control
 */
void Servo_Init(void)
{
   Position_Servo_1 = PWM_OFFSET + (PWM_SPAN/2); /* set servo position to mid point */
   Position_Servo_2 = PWM_OFFSET + (PWM_SPAN/2); /* set servo position to mid point */
   Position_Servo_3 = PWM_OFFSET + (PWM_SPAN/2); /* set servo position to mid point */
   TMR2_SetInterruptHandler(TMR2_ServoInterruptHandler);

    /* Set initial positions */
    PwmServo_1 = Position_Servo_1;
}
/*
 * Set servo 1 position
 * 
 * Input:   floating point angle between -90.0 to +90.0 degrees
 * 
 */
void Servo1_SetPosition(float DegreesFromZero)
{
    uint16_t temp;

    if((DegreesFromZero < -90.0) || (DegreesFromZero > 90.0))
    {
        return;
    }
    
    temp  = (uint16_t)(PWM_OFFSET + (PWM_SPAN/2)) + (uint16_t)((PWM_SPAN/2) * (DegreesFromZero / 90.0));
    Position_Servo_1 = temp;
}
/*
 * Set servo 2 position
 * 
 * Input:   floating point angle between -90.0 to +90.0 degrees
 * 
 */
void Servo2_SetPosition(float DegreesFromZero)
{
    uint16_t temp;

    if((DegreesFromZero < -90.0) || (DegreesFromZero > 90.0))
    {
        return;
    }
    
    temp  = (uint16_t)(PWM_OFFSET + (PWM_SPAN/2)) + (uint16_t)((PWM_SPAN/2) * (DegreesFromZero / 90.0));
    Position_Servo_2 = temp;
}
/*
 * Set servo 3 position
 * 
 * Input:   floating point angle between -90.0 to +90.0 degrees
 * 
 */
void Servo3_SetPosition(float DegreesFromZero)
{
    uint16_t temp;

    if((DegreesFromZero < -90.0) || (DegreesFromZero > 90.0))
    {
        return;
    }
    
    temp  = (uint16_t)(PWM_OFFSET + (PWM_SPAN/2)) + (uint16_t)((PWM_SPAN/2) * (DegreesFromZero / 90.0));
    Position_Servo_3 = temp;
}