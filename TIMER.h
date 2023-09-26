/*
 * TIMER.h
 *
 *  Created on: Aug 25, 2023
 *      Author: F1
 */

#ifndef MCAL_TIMER_H_
#define MCAL_TIMER_H_

#include <avr/io.h>
#include "../STD_TYPES.h"
#include "../Utils.h"

typedef enum{
	NORMAL,
	PHASE_CORRECT,
	CTC,
	FAST_PWM
}TIMER0_MODE_TYPE;

typedef enum{
	TIMER0_STOP,
	NO_PRESCALAR,
	PRESCALAR8,
	PRESCALAR64,
	PRESCALAR256,
	PRESCALAR1024,
	EX_FAILING,
	EX_RISING
}TIMER0_PRESCALAR;

typedef enum{
	OC0_NOT_CONNECTED,
	OC0_TOOGLE,
	OC0_NON_INVERTING,
	OC0_INVERTING
}OC0_MODE_TYPE;




void TIMER0_Init(TIMER0_MODE_TYPE mode,TIMER0_PRESCALAR prescalar,OC0_MODE_TYPE oc);
void TIMER0_InterruptEnable();
void TIMER0_InterruptDisable();
void OC0_InterruptEnable();
void OC0_InterruptDisable();

#endif /* MCAL_TIMER_H_ */
