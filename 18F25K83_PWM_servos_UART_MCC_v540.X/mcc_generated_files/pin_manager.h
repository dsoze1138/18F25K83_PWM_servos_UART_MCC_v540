/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.5
        Device            :  PIC18F25K83
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.20 and above
        MPLAB 	          :  MPLAB X 5.40	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set LED_DS1 aliases
#define LED_DS1_TRIS                 TRISBbits.TRISB0
#define LED_DS1_LAT                  LATBbits.LATB0
#define LED_DS1_PORT                 PORTBbits.RB0
#define LED_DS1_WPU                  WPUBbits.WPUB0
#define LED_DS1_OD                   ODCONBbits.ODCB0
#define LED_DS1_ANS                  ANSELBbits.ANSELB0
#define LED_DS1_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define LED_DS1_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define LED_DS1_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define LED_DS1_GetValue()           PORTBbits.RB0
#define LED_DS1_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define LED_DS1_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define LED_DS1_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define LED_DS1_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define LED_DS1_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define LED_DS1_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define LED_DS1_SetAnalogMode()      do { ANSELBbits.ANSELB0 = 1; } while(0)
#define LED_DS1_SetDigitalMode()     do { ANSELBbits.ANSELB0 = 0; } while(0)

// get/set LED_DS2 aliases
#define LED_DS2_TRIS                 TRISBbits.TRISB1
#define LED_DS2_LAT                  LATBbits.LATB1
#define LED_DS2_PORT                 PORTBbits.RB1
#define LED_DS2_WPU                  WPUBbits.WPUB1
#define LED_DS2_OD                   ODCONBbits.ODCB1
#define LED_DS2_ANS                  ANSELBbits.ANSELB1
#define LED_DS2_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define LED_DS2_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define LED_DS2_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define LED_DS2_GetValue()           PORTBbits.RB1
#define LED_DS2_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define LED_DS2_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define LED_DS2_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define LED_DS2_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define LED_DS2_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define LED_DS2_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define LED_DS2_SetAnalogMode()      do { ANSELBbits.ANSELB1 = 1; } while(0)
#define LED_DS2_SetDigitalMode()     do { ANSELBbits.ANSELB1 = 0; } while(0)

// get/set LED_DS3 aliases
#define LED_DS3_TRIS                 TRISBbits.TRISB2
#define LED_DS3_LAT                  LATBbits.LATB2
#define LED_DS3_PORT                 PORTBbits.RB2
#define LED_DS3_WPU                  WPUBbits.WPUB2
#define LED_DS3_OD                   ODCONBbits.ODCB2
#define LED_DS3_ANS                  ANSELBbits.ANSELB2
#define LED_DS3_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define LED_DS3_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define LED_DS3_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define LED_DS3_GetValue()           PORTBbits.RB2
#define LED_DS3_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define LED_DS3_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define LED_DS3_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define LED_DS3_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define LED_DS3_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define LED_DS3_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define LED_DS3_SetAnalogMode()      do { ANSELBbits.ANSELB2 = 1; } while(0)
#define LED_DS3_SetDigitalMode()     do { ANSELBbits.ANSELB2 = 0; } while(0)

// get/set LED_DS4 aliases
#define LED_DS4_TRIS                 TRISBbits.TRISB3
#define LED_DS4_LAT                  LATBbits.LATB3
#define LED_DS4_PORT                 PORTBbits.RB3
#define LED_DS4_WPU                  WPUBbits.WPUB3
#define LED_DS4_OD                   ODCONBbits.ODCB3
#define LED_DS4_ANS                  ANSELBbits.ANSELB3
#define LED_DS4_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define LED_DS4_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define LED_DS4_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define LED_DS4_GetValue()           PORTBbits.RB3
#define LED_DS4_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define LED_DS4_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define LED_DS4_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define LED_DS4_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define LED_DS4_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define LED_DS4_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define LED_DS4_SetAnalogMode()      do { ANSELBbits.ANSELB3 = 1; } while(0)
#define LED_DS4_SetDigitalMode()     do { ANSELBbits.ANSELB3 = 0; } while(0)

// get/set PGC aliases
#define PGC_TRIS                 TRISBbits.TRISB6
#define PGC_LAT                  LATBbits.LATB6
#define PGC_PORT                 PORTBbits.RB6
#define PGC_WPU                  WPUBbits.WPUB6
#define PGC_OD                   ODCONBbits.ODCB6
#define PGC_ANS                  ANSELBbits.ANSELB6
#define PGC_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define PGC_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define PGC_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define PGC_GetValue()           PORTBbits.RB6
#define PGC_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define PGC_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define PGC_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define PGC_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define PGC_SetPushPull()        do { ODCONBbits.ODCB6 = 0; } while(0)
#define PGC_SetOpenDrain()       do { ODCONBbits.ODCB6 = 1; } while(0)
#define PGC_SetAnalogMode()      do { ANSELBbits.ANSELB6 = 1; } while(0)
#define PGC_SetDigitalMode()     do { ANSELBbits.ANSELB6 = 0; } while(0)

// get/set PGD aliases
#define PGD_TRIS                 TRISBbits.TRISB7
#define PGD_LAT                  LATBbits.LATB7
#define PGD_PORT                 PORTBbits.RB7
#define PGD_WPU                  WPUBbits.WPUB7
#define PGD_OD                   ODCONBbits.ODCB7
#define PGD_ANS                  ANSELBbits.ANSELB7
#define PGD_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define PGD_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define PGD_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define PGD_GetValue()           PORTBbits.RB7
#define PGD_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define PGD_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define PGD_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define PGD_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define PGD_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define PGD_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define PGD_SetAnalogMode()      do { ANSELBbits.ANSELB7 = 1; } while(0)
#define PGD_SetDigitalMode()     do { ANSELBbits.ANSELB7 = 0; } while(0)

// get/set SOSCO aliases
#define SOSCO_TRIS                 TRISCbits.TRISC0
#define SOSCO_LAT                  LATCbits.LATC0
#define SOSCO_PORT                 PORTCbits.RC0
#define SOSCO_WPU                  WPUCbits.WPUC0
#define SOSCO_OD                   ODCONCbits.ODCC0
#define SOSCO_ANS                  ANSELCbits.ANSELC0
#define SOSCO_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define SOSCO_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define SOSCO_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define SOSCO_GetValue()           PORTCbits.RC0
#define SOSCO_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define SOSCO_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define SOSCO_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define SOSCO_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define SOSCO_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define SOSCO_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define SOSCO_SetAnalogMode()      do { ANSELCbits.ANSELC0 = 1; } while(0)
#define SOSCO_SetDigitalMode()     do { ANSELCbits.ANSELC0 = 0; } while(0)

// get/set SOSCI aliases
#define SOSCI_TRIS                 TRISCbits.TRISC1
#define SOSCI_LAT                  LATCbits.LATC1
#define SOSCI_PORT                 PORTCbits.RC1
#define SOSCI_WPU                  WPUCbits.WPUC1
#define SOSCI_OD                   ODCONCbits.ODCC1
#define SOSCI_ANS                  ANSELCbits.ANSELC1
#define SOSCI_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define SOSCI_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define SOSCI_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define SOSCI_GetValue()           PORTCbits.RC1
#define SOSCI_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define SOSCI_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define SOSCI_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define SOSCI_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define SOSCI_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define SOSCI_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define SOSCI_SetAnalogMode()      do { ANSELCbits.ANSELC1 = 1; } while(0)
#define SOSCI_SetDigitalMode()     do { ANSELCbits.ANSELC1 = 0; } while(0)

// get/set RC2 procedures
#define RC2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define RC2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define RC2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define RC2_GetValue()              PORTCbits.RC2
#define RC2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define RC2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define RC2_SetPullup()             do { WPUCbits.WPUC2 = 1; } while(0)
#define RC2_ResetPullup()           do { WPUCbits.WPUC2 = 0; } while(0)
#define RC2_SetAnalogMode()         do { ANSELCbits.ANSELC2 = 1; } while(0)
#define RC2_SetDigitalMode()        do { ANSELCbits.ANSELC2 = 0; } while(0)

// get/set RC3 procedures
#define RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define RC3_GetValue()              PORTCbits.RC3
#define RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define RC3_SetPullup()             do { WPUCbits.WPUC3 = 1; } while(0)
#define RC3_ResetPullup()           do { WPUCbits.WPUC3 = 0; } while(0)
#define RC3_SetAnalogMode()         do { ANSELCbits.ANSELC3 = 1; } while(0)
#define RC3_SetDigitalMode()        do { ANSELCbits.ANSELC3 = 0; } while(0)

// get/set RC4 procedures
#define RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RC4_GetValue()              PORTCbits.RC4
#define RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define RC4_SetPullup()             do { WPUCbits.WPUC4 = 1; } while(0)
#define RC4_ResetPullup()           do { WPUCbits.WPUC4 = 0; } while(0)
#define RC4_SetAnalogMode()         do { ANSELCbits.ANSELC4 = 1; } while(0)
#define RC4_SetDigitalMode()        do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetPullup()             do { WPUCbits.WPUC6 = 1; } while(0)
#define RC6_ResetPullup()           do { WPUCbits.WPUC6 = 0; } while(0)
#define RC6_SetAnalogMode()         do { ANSELCbits.ANSELC6 = 1; } while(0)
#define RC6_SetDigitalMode()        do { ANSELCbits.ANSELC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetPullup()             do { WPUCbits.WPUC7 = 1; } while(0)
#define RC7_ResetPullup()           do { WPUCbits.WPUC7 = 0; } while(0)
#define RC7_SetAnalogMode()         do { ANSELCbits.ANSELC7 = 1; } while(0)
#define RC7_SetDigitalMode()        do { ANSELCbits.ANSELC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/