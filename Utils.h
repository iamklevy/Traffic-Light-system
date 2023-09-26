/*
 * Utils.h
 *
 *  Created on: Aug 9, 2023
 *      Author: F1
 */

#ifndef UTILS_H_
#define UTILS_H_
#define SET_BIT(REG,BIT) (REG=REG|(1<<BIT))
#define CLR_BIT(REG,BIT) (REG&=~(1<<BIT))
#define READ_BIT(REG,BIT) ((REG>>BIT)&1)
#define TGL_BIT(REG,BIT)  (REG=REG^(1<<BIT))


#endif /* UTILS_H_ */
