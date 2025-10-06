/*
 * softwaretimer.c
 *
 *  Created on: Oct 6, 2025
 *      Author: ADMIN-5540
 */
#include "software_timer.h"

int timer1_counter = 0;
int timer1_flag = 0;

void setTimer1(int duration){
	timer1_counter = duration;
	timer1_flag = 0;
}
void timerRun(){
	if(timer1_counter > 0){
		timer1_counter--;
		if(timer1_counter <=0){
			timer1_flag = 1;
		}
	}
}
int timer0_counter = 0;
int timer0_flag = 0;

void setTimer0(int duration){
	timer0_counter = duration;
	timer0_flag = 0;
}
void timer_Run(){
	if(timer0_counter > 0){
		timer0_counter--;
		if(timer0_counter <=0){
			timer0_flag = 1;
		}
	}
}

