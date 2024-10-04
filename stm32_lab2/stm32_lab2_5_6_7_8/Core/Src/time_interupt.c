/*
 * time_interupt.c
 *
 *  Created on: Oct 2, 2024
 *      Author: ADMIN
 */

/*
 * time_interupt.c
 *
 *  Created on: Oct 2, 2024
 *      Author: ADMIN
 */
#include "time_interupt.h"
#include "7SEGfunction.h"
#include "stm32f1xx_hal.h"

//for ex 3,4

const int MAX_LED = 4;
int index_led = 0;
int led_buffer[4] = {1, 2, 3, 4};

//implement ex5
int hour = 19 , minute = 9 , second = 50;
//for ex5
void updateClockBuffer() {
		led_buffer[0] = hour / 10;
		led_buffer[1] = hour % 10;
		led_buffer[2] = minute / 10;
		led_buffer[3] = minute % 10;
		update7SEG(0);
		HAL_Delay(50);
		update7SEG(1);
		HAL_Delay(50);
		update7SEG(2);
		HAL_Delay(50);
		update7SEG(3);
		HAL_Delay(50);
//bad
}
//remove HAL-Delay 			ex6
void updateClockBufferEx6(){
		led_buffer[0] = hour / 10;
		led_buffer[1] = hour % 10;
		led_buffer[2] = minute / 10;
		led_buffer[3] = minute % 10;
}

//implement ex6
int counter0 = 0;
int time0flag = 0;
int counter1 = 0;
int time1flag = 0;
int TIMECYCLE = 10;
void setTime0(int dur){
	counter0 = dur / TIMECYCLE ;
	time0flag = 0;
}
void setTime1(int dur){
	counter1 = dur / TIMECYCLE ;
	time1flag = 0;
}
void timeRun0(){
	if(counter0 >0){
		counter0--;
		if(counter0 ==0){
			time0flag = 1;
		}
	}
}
void timeRun1(){
	if(counter1 >0){
		counter1--;
		if(counter1 ==0){
			time1flag = 1;
		}
	}
}


