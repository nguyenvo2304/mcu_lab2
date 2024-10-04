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

// for ex 3,4
extern const int MAX_LED;
extern int index_led;
extern int led_buffer[4];

void setEnable(uint16_t num);
void update7SEG(int index);
void display7SEG(int num, GPIO_TypeDef* GPIOx, uint16_t start_index);



//for ex 5,6,7,8
extern int hour;
extern int minute;
extern int second;
extern int half_sec;

extern int counter0;
extern int time0flag;
extern int TIMECYCLE;

void timeRun0();
void setTime0(int dur);
void updateClockBuffer();
void updateClockBufferEx6();



#endif /* INC_TIME_INTERUPT_H_ */
