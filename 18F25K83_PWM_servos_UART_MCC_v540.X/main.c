/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.5
        Device            :  PIC18F25K83
        Driver Version    :  2.00
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

#include "mcc_generated_files/mcc.h"
#include "servos.h"

/*
                         Main application
 */
void main(void)
{
    float S1,S2,S3;
    float S1d,S2d,S3d;

    // Initialize the device
    SYSTEM_Initialize();
    Servo_Init();
    
    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global Interrupts
    // Use the following macros to:

    // Enable high priority global interrupts
    INTERRUPT_GlobalInterruptHighEnable();

    // Enable low priority global interrupts.
    INTERRUPT_GlobalInterruptLowEnable();

    // Disable high priority global interrupts
    //INTERRUPT_GlobalInterruptHighDisable();

    // Disable low priority global interrupts.
    //INTERRUPT_GlobalInterruptLowDisable();

    __delay_ms(2500); /* wait for IDE to stop messing with the ICD tool */
    printf("PIC18F25K83 Servo demo v1.0 built " __DATE__ " at " __TIME__ "\r\n");
    Servo1_SetPosition(0.0);
    Servo2_SetPosition(0.0);
    Servo3_SetPosition(0.0);
    S1 = +0.0;
    S2 = +0.0;
    S3 = +0.0;
    S1d = +0.75*1.0;
    S2d = +0.75*2.0;
    S3d = -0.75*3.0;
    while (1)
    {
        // Add your application code
        __delay_ms(10);
        
        S1 = S1 + S1d;
        if ((S1>45.0) || (S1<-45.0))
        {   
            S1d = -S1d;
            S1 = S1 + S1d;
        }

        S2 = S2 + S2d;
        if ((S2>45.0) || (S2<-45.0))
        {   
            S2d = -S2d;
            S2 = S2 + S2d;
        }
        
        S3 = S3 + S3d;
        if ((S3>45.0) || (S3<-45.0))
        {   
            S3d = -S3d;
            S3 = S3 + S3d;
        }
        Servo1_SetPosition(S1);
        Servo2_SetPosition(S2);
        Servo3_SetPosition(S3);
    }
}
/**
 End of File
*/