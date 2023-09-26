/*

 * main.c
 *
 *  Created on: Aug 9, 2023
 *      Author: F1
 */
#include "avr/io.h"
#include "avr/delay.h"
#include"STD_TYPES.h"
#include"Utils.h"
#include "MCAL/DIO.h"
#include "HAL/LCD.h"
#include "HAL/keypad.h"
#include "avr/interrupt.h"
#include "HAL/MOTOR.h"
#include "HAl/Stepper.h"
#include "MCAL/ADC/ADC.h"
#include "MCAL/UART.h"
#include "MCAL/SPI.h"
#include "MCAL/TIMER.h"
#include "MCAL/EX_Interrupt.h"




static u8 seven[10]={0b00111111,
		0b00000110,
		0b01011011,
		0b01001111,
		0b01100110,
		0b01101101,
		0b01111101,
		0b00000111,
		0b01111111,
		0b01101111};



s8 i=30,flag=0;
void main(void)
{
	DIO_Init();
	LCD_Init();
	sei();
	EXI_Enable(EX_INT2);
	EXI_TriggerEdge(EX_INT2,FALLING_EDGE);

	LCD_WriteString("Welcome To Our");
	LCD_SetCursor(1,1);
	LCD_WriteString("Small Traffic");
	PORTC = seven[0];
	PORTD = seven[0];
	_delay_ms(700);


	while(1){



		//Cars off People on
		LCD_Clear();
		flag=0;
		u8 seg0=0,seg1=0;
		LCD_WriteString("People Go");
		DIO_WritePin(PINB05,HIGH);
		for(i=30;i>=0;i--){
			seg1=i/10;
			seg0=i%10;
			PORTC=seven[seg1];
			PORTD=seven[seg0];

			_delay_ms(900);
		}
		DIO_WritePin(PINB05,LOW);

		//Warning
		LCD_Clear();
		LCD_WriteString("Warning......");
		LCD_SetCursor(1,0);
		LCD_WriteString("Cars will go");
		DIO_WritePin(PINB06,HIGH);
		for(i=5;i>=0;i--){
			PORTC=seven[0];
			PORTD=seven[i];
			_delay_ms(900);
		}
		DIO_WritePin(PINB06,LOW);
		//Cars On People Off
		LCD_Clear();
		LCD_WriteString("Waring:Stop");
		LCD_SetCursor(1,0);
		LCD_WriteString("use key to go");
		DIO_WritePin(PINB07,HIGH);
		flag=1;
		for(i=30;i>=0;i--){
			seg1=i/10;
			seg0=i%10;
			PORTC=seven[seg1];
			PORTD=seven[seg0];

			_delay_ms(900);
		}
		DIO_WritePin(PINB07,LOW);
		//Warning
		LCD_Clear();
		LCD_WriteString("Peaple Ready");

		DIO_WritePin(PINB06,HIGH);
		for(i=5;i>=0;i--){
			PORTC=seven[0];
			PORTD=seven[i];

			_delay_ms(900);
		}
		DIO_WritePin(PINB06,LOW);

	}




}

ISR(INT2_vect){
	if(i>5 && flag==1){
		i=6;

	}

}


