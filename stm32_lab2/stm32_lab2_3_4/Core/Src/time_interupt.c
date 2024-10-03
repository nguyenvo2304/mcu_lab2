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


const int MAX_LED = 4;
int index_led = 0;
int led_buffer[4] = {1, 2, 3, 4};
int counter1 = 100;
int counter2 = 50;
int time1flag = 0;
int time2flag = 0;



void setTimer1(int dur){
	counter1 = dur;
	time1flag =0;
}
void setTimer2(int dur){
	counter2 = dur;
	time2flag =0;
}

//for ex3
void timeRun1(){
	if(counter1 > 0){
		counter1--;
	}
	if(counter1 <=0){
		counter1 = 100;
		time1flag =1;
	}
	if(counter2 > 0){
		counter2--;
	}
	if(counter2 <=0){
		counter2 = 50;
		time2flag =1;
	}
	if(index_led >3) index_led = 0;
}

//for ex4
void timeRun2(){
	if(counter1 > 0){
		counter1--;
	}
	if(counter1 <=0){
		counter1 = 100;
		time1flag = 1;
	}
	if(counter2 > 0){
		counter2--;
	}
	if(counter2 <=0){
		counter2 = 50;
		time2flag =1;
	}
	if (counter2 % 25 == 0)
		update7SEG(index_led++);

	if (counter2 <= 0)
		counter2 = 100;

	if (index_led > 3)
		index_led = 0;

}




