/*
 * 7SEGfunction.h
 *
 *  Created on: Oct 2, 2024
 *      Author: ADMIN
 */

#ifndef INC_7SEGFUNCTION_H_
#define INC_7SEGFUNCTION_H_
#include "stm32f1xx_hal.h"
#include "time_interupt.h"


extern const int MAX_LED;
extern int index_led;
extern int led_buffer[4];
extern int counter1;
extern int counter2;
extern int time1flag;
extern int time2flag;


void display7SEG(int num, GPIO_TypeDef* GPIOx, uint16_t start_index);
void setEnable(uint16_t num);
void update7SEG(int index);


#endif /* INC_7SEGFUNCTION_H_ */
