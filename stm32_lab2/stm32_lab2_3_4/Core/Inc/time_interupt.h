/*
 * time_interupt.h
 *
 *  Created on: Oct 2, 2024
 *      Author: ADMIN
 */

#ifndef INC_TIME_INTERUPT_H_
#define INC_TIME_INTERUPT_H_
#include "stm32f1xx_hal.h"
#include "7SEGfunction.h"

//const & var
extern const int MAX_LED;
extern int index_led;
extern int led_buffer[4];
extern int counter1;
extern int counter2;
extern int time1flag;
extern int time2flag;
//func
void setEnable(uint16_t num);
void update7SEG(int index);
void display7SEG(int num, GPIO_TypeDef* GPIOx, uint16_t start_index);
#endif /* INC_TIME_INTERUPT_H_ */
