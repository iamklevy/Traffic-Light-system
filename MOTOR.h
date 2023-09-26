/*
 * MOTOR.h
 *
 *  Created on: Aug 14, 2023
 *      Author: NEW LAP
 */

#ifndef HAL_MOTOR_H_
#define HAL_MOTOR_H_
#include"../MCAL/DIO.h"
#define Number_Of_MOTOR   4
#define Number_Of_PIN_PER_MOTOR  2
#define IN1   0
#define IN2   1

typedef enum{
	M1,
	M2,
	M3,
	M4
}MOTOR_type;

/*#define EN1_M1    PINB00
#define EN2_M1    PINB01
#define EN1_M2    PINB02
#define EN2_M2    PINB03
*/
void MOTOR_CW(MOTOR_type motor);
void MOTOR_CCW(MOTOR_type motor);
void MOTOR_STOP(MOTOR_type motor);

#endif /* HAL_MOTOR_H_ */
