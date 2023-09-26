/*
 * SPI.c
 *
 *  Created on: Aug 24, 2023
 *      Author: F1
 */

#include "SPI.h"


void SPI_Init(void){


	if(SPI_MODE==MASTER){
		SET_BIT(SPCR,MSTR);
	}
	else {
		CLR_BIT(SPCR,MSTR);
	}


	SET_BIT(SPCR,SPE);

}


u8 SPI_SendReceive(u8 data){

	SPDR=data;
	while(READ_BIT(SPSR,SPIF)==0);
	return SPDR;
}
