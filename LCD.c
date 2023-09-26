/*
 *
 * LCD.c
 *
 *  Created on: Aug 13, 2023
 *      Author: F1
 */

#include "LCD.h"




static void LCD_WriteInstruction(u8 cmd){
	DIO_WritePin(RS,LOW);
	DIO_WritePort(PA,cmd);
	_delay_ms(1);
	DIO_WritePin(EN,HIGH);
	_delay_ms(1);
	DIO_WritePin(EN,LOW);
	_delay_ms(1);
}


void LCD_Init(void){
	_delay_ms(50);
	LCD_WriteInstruction(0x38);          //8bit mode 2line 5*7 font
	LCD_WriteInstruction(0x0c);
	LCD_WriteInstruction(0x01);          //Display Clear
	_delay_ms(1);
	LCD_WriteInstruction(0x06);
}

static void LCD_WriteData(u8 chh)
{
	DIO_WritePin(RS,HIGH);
	DIO_WritePort(PA,chh);

	_delay_ms(1);
	DIO_WritePin(EN,HIGH);
	_delay_ms(1);
	DIO_WritePin(EN,LOW);
	_delay_ms(1);

}
void LCD_WriteNumber(s32 num){

	u8 str[16];
	u8 i=0;
	if(num<0){
		num=num*(-1);
		LCD_WriteChar('-');
	}

	do{
		str[i]=num%10+'0';
		num=num/10;
		i++;
	}while(num>0);

	for(s8 j=i-1;j>=0;j--)
	{   LCD_WriteChar(str[j]);
	}

}


void LCD_WriteChar(u8 ch){
	LCD_WriteData(ch);
}

void LCD_WriteString(u8 *str){

	for(u8 i=0;i<strlen(str);i++){
		LCD_WriteChar(str[i]);

	}


}
void LCD_Clear(void) {
	LCD_WriteInstruction(0x01);
	_delay_ms(1);
}


void  LCD_SetCursor(u8 line,u8 cell){

	if(line==0)
	{   LCD_WriteInstruction(0x80+cell);
	}
	else if(line==1)
	{   LCD_WriteInstruction(0x80+0x40+cell);
	}
}

void LCD_WriteHex(u8 num){

	u8 str[16];
	u8 i=0;
	u8 value;
	if(num<=15){
		str[i]="0123456789ABCDEF"[num];
		i++;
	}
	else{
		do{
			value=num%16;
			num=num/16;
			str[i]="0123456789ABCDEF"[value];
			i++;
		}while(num>0);
	}
	for(s8 j=i-1;j>=0;j--)
	{   LCD_WriteChar(str[j]);
	}
}

void LCD_WriteBinary(u8 num){

	u8 str[8];
	u8 i=0;
	u8 value;
	//num=100;
	do{
		value=(u8)(num%2); //1 1 1 1 >>15

		num/=2; //7 3 1 0 >>15
		if(value==1){
			str[i]='1';
		}
		else{
			str[i]='0';
		}

		i++;
	}while(num>0);

	//LCD_WriteChar('P');
	for(s8 j=i-1;j>=0;j--)
	{

		LCD_WriteChar(str[j]);
	}




}
