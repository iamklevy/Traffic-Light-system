/*
 * WDT.h
 *
 *  Created on: Aug 22, 2023
 *      Author: NEW LAP
 */

#ifndef MCAL_WDT_H_
#define MCAL_WDT_H_

#include <avr/io.h>
#include"../STD_TYPES.h"
#include"../Utils.h"

typedef enum {
	timeOut_16ms,
	timeOut_32ms,
	timeOut_65ms,
	timeOut_130ms,
	timeOut_260ms,
	timeOut_520ms,
	timeOut_1000ms,
	timeOut_2100ms,
}TimeOut_type;

void WDT_set(TimeOut_type time);
void WDT_stop(void);


#endif /* MCAL_WDT_H_ */
