/*
 * MOTOR.c
 *
 *  Created on: Aug 14, 2023
 *      Author: NEW LAP
 */


#include"MOTOR.h"

const MotorPinsArray[Number_Of_MOTOR][Number_Of_PIN_PER_MOTOR]={
	              /*IN1   IN2*/
/*MOTOR 1*/      {PINC00,PINC01},
/*MOTOR 2*/      {PINA01,PINB01},
/*MOTOR 3*/      {PINA01,PINB01},
/*MOTOR 4*/      {PINA01,PINB01},
};



void MOTOR_CW(MOTOR_type motor )
{
	DIO_WritePin(MotorPinsArray[motor][IN1],HIGH);
	DIO_WritePin(MotorPinsArray[motor][IN2],LOW);
}
void MOTOR_CCW(MOTOR_type motor)
{
    DIO_WritePin(MotorPinsArray[motor][IN1],LOW);
    DIO_WritePin(MotorPinsArray[motor][IN2],HIGH);
}
void MOTOR_STOP(MOTOR_type motor)
{
	DIO_WritePin(MotorPinsArray[motor][IN1],LOW);
	DIO_WritePin(MotorPinsArray[motor][IN2],LOW);
}
