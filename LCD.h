/*
 * LCD.h
 *
 *  Created on: Aug 13, 2023
 *      Author: F1
 */

#ifndef HAL_LCD_H_
#define HAL_LCD_H_
#include "../MCAL/DIO.h"




/*Configuration*/
#define EN PINB01
#define RS PINB00



#define LCD_PORT PA




//Functions
void LCD_Init(void);
static void LCD_WriteInstruction(u8 cmd);
static void LCD_WriteData(u8 ch);
void LCD_WriteNumber(s32 num);
void LCD_WriteChar(u8 ch);
void LCD_WriteString(u8 *str);
void  LCD_SetCursor(u8 line,u8 cell);
void LCD_Clear(void);
void LCD_WriteHex(u8 num);
void LCD_WriteBinary(u8 num);

#endif /* HAL_LCD_H_ */
