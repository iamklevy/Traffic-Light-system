/************************************************************************************/
/************************************************************************************/
/*************************		Author: Mahmoud Badr		*************************/
/*************************		Layer:  RTOS Stack		    *************************/
/*************************		SWC: 	TIMER 				*************************/
/*************************		Version:1.00				*************************/
/************************************************************************************/
/************************************************************************************/

#ifndef COTS_1_MCAL_6__TIMER_TIMER_CONFIG_H_
#define COTS_1_MCAL_6__TIMER_TIMER_CONFIG_H_

/*Choose Pre-scaler
 * 1- NO_CLK_SRC
 * 2- NO_DIV
 * 3- DIV_BY_8
 * 4- DIV_BY_64
 * 5- DIV_BY_256
 * 6- DIV_BY_1024
 * 7- EXT_CLK_FALL_EDGE
 * 8- EXT_CLK_RAIS_EDGESCALER DIV_BY_128 */
#define TIMER0_PRESCALER DIV_BY_8

#define TIMER0_COMP_MATCH_VALUE		125

#endif /* COTS_1_MCAL_6__TIMER_TIMER_CONFIG_H_ */