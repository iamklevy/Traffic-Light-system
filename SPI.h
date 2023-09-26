/*
 * SPI.h
 *
 *  Created on: Aug 24, 2023
 *      Author: F1
 */

#ifndef MCAL_SPI_H_
#define MCAL_SPI_H_

#include <avr/io.h>
#include"../STD_TYPES.h"
#include"../Utils.h"



#define MASTER 0
#define SALVE  1
#define SPI_MODE MASTER

void SPI_Init(void);
u8 SPI_SendReceive(u8 data);



#endif /* MCAL_SPI_H_ */
