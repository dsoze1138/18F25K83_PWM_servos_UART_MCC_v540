/* 
 * File:   servos.h
 * Author: dan1138
 *
 * Created on September 19, 2020, 2:05 PM
 */

#ifndef SERVOS_H
#define	SERVOS_H

#include "mcc_generated_files/mcc.h"

#ifdef	__cplusplus
extern "C" {
#endif
    
void Servo_Init(void);
void Servo1_SetPosition(float DegreesFromZero);
void Servo2_SetPosition(float DegreesFromZero);
void Servo3_SetPosition(float DegreesFromZero);

#ifdef	__cplusplus
}
#endif

#endif	/* SERVOS_H */

