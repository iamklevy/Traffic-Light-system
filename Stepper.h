/*
 * Stepper.h
 *
 *  Created on: Aug 15, 2023
 *      Author: NEW LAP
 */

#ifndef HAL_STEPPER_H_
#define HAL_STEPPER_H_

#include"../MCAL/DIO.h"
/*********************************/
#define COIL1A   PINC04
#define COIL1B   PINC05
#define COIL2A   PINC06
#define COIL2B   PINC07


#define DELAY    500
/*********************************/
void STEPPER_Bipolar_CW(void);
void STEPPER_Bipolar_CCW(void);
void STEPPER_Unipolar_CW(void);
void STEPPER_Unipolar_CCW(void);
void STEPPER_Unipolar_CW_HS(void);
void STEPPER_Unipolar_CCW_HS(void);
//void STEPPER_Angle(u16 angle);
// STEPPER_rotate(u16 turn);

#endif /* HAL_STEPPER_H_ */
