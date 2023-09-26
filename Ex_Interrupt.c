/*
 * Ex_Interrupt.c
 *
 *  Created on: Aug 17, 2023
 *      Author: F1
 */


#include "EX_Interrupt.h"



void EXI_Enable(ExInterruptSource_type Interrupt){

	if(Interrupt==0){
		SET_BIT(GICR,INT0);
	}
	else if(Interrupt==1){
		SET_BIT(GICR,INT1);
	}
	else if(Interrupt==2){
		SET_BIT(GICR,INT2);
	}

}
void EXI_Disable(ExInterruptSource_type Interrupt){

	if(Interrupt==0){
		CLR_BIT(GICR,INT0);
	}
	else if(Interrupt==1){
		CLR_BIT(GICR,INT1);
	}
	else if(Interrupt==2){
		CLR_BIT(GICR,INT2);
	}

}
void EXI_TriggerEdge(ExInterruptSource_type Interrupt,TriggerEdge_type Edge){
	if(Interrupt==0){
		if(Edge==0){
			CLR_BIT(MCUCR,0);
			CLR_BIT(MCUCR,1);
		}
		else if(Edge==1){
			SET_BIT(MCUCR,0);
			CLR_BIT(MCUCR,1);
		}
		else if(Edge==2){
			CLR_BIT(MCUCR,0);
			SET_BIT(MCUCR,1);
		}
		else if(Edge==3){
			SET_BIT(MCUCR,0);
			SET_BIT(MCUCR,1);
		}
	}



	else if(Interrupt==1){
		if(Edge==0){
			CLR_BIT(MCUCR,2);
			CLR_BIT(MCUCR,3);
		}
		else if(Edge==1){
			SET_BIT(MCUCR,2);
			CLR_BIT(MCUCR,3);
		}
		else if(Edge==2){
			CLR_BIT(MCUCR,2);
			SET_BIT(MCUCR,3);
		}
		else if(Edge==3){
			SET_BIT(MCUCR,2);
			SET_BIT(MCUCR,3);
		}
	}
	else if(Interrupt==2){

		// first 2 cases just for the sake of it
		if(Edge==0){
			CLR_BIT(MCUCSR,ISC2);
		}
		else if(Edge==1){
			CLR_BIT(MCUCSR,ISC2);
		}
		else if(Edge==2){
			CLR_BIT(MCUCSR,ISC2);
		}
		else if(Edge==3){
			SET_BIT(MCUCSR,ISC2);
		}


	}

}

//void EXI_SetCallBack(ExInterruptSource_type Interrupt,void(*LocalPtr)(void));
