/*
 * TIMER.c
 *
 *  Created on: Aug 25, 2023
 *      Author: F1
 */
#include "TIMER.h"

void TIMER0_Init(TIMER0_MODE_TYPE mode,TIMER0_PRESCALAR prescalar,OC0_MODE_TYPE oc){
	TCCR0=0x00;
	switch(mode){
	case NORMAL:
		CLR_BIT(TCCR0,WGM00);
		CLR_BIT(TCCR0,WGM01);
		break;
	case PHASE_CORRECT:
		SET_BIT(TCCR0,WGM00);
		CLR_BIT(TCCR0,WGM01);
		break;
	case CTC:
		CLR_BIT(TCCR0,WGM00);
		SET_BIT(TCCR0,WGM01);
		break;
	case FAST_PWM:
		SET_BIT(TCCR0,WGM00);
		SET_BIT(TCCR0,WGM01);
		break;
	}

	switch(oc){
	case OC0_NOT_CONNECTED:
		CLR_BIT(TCCR0,COM00);
		CLR_BIT(TCCR0,COM01);
		break;
	case OC0_TOOGLE:
		SET_BIT(TCCR0,COM00);
		CLR_BIT(TCCR0,COM01);
		break;
	case OC0_NON_INVERTING:
		CLR_BIT(TCCR0,COM00);
		SET_BIT(TCCR0,COM01);
		break;
	case OC0_INVERTING:
		SET_BIT(TCCR0,COM00);
		SET_BIT(TCCR0,COM01);
		break;
	}
	TCCR0|=prescalar;

	/*switch(prescalar){
	case TIMER0_STOP:
		TCCR0&=0xf8;
		break;
	case NO_PRESCALAR:
		TCCR0|=(1<<CS00);
		break;
	case PRESCALAR8:
		TCCR0|=(1<<CS01);
		break;
	case PRESCALAR64:
		TCCR0|=(1<<CS00)|(1<<CS01);
		break;
	case PRESCALAR256:
		TCCR0|=(1<<CS02);
		break;
	case PRESCALAR1024:
		TCCR0|=(1<<CS00)|(1<<CS02);
		break;
	case EX_FAILING:
		TCCR0|=(1<<CS01)|(1<<CS02);
		break;
	case EX_RISING:
		TCCR0|=0x07;
		break;
	}*/
}


void TIMER0_InterruptEnable(){
	SET_BIT(TIMSK,TOIE0);
}
void TIMER0_InterruptDisable(){
	CLR_BIT(TIMSK,TOIE0);
}

void OC0_InterruptEnable(){
	SET_BIT(TIMSK,OCIE0);
}
void OC0_InterruptDisable(){
	CLR_BIT(TIMSK,OCIE0);
}
