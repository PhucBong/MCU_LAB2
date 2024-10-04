/*
 * software_timer.c
 *
 *  Created on: Sep 27, 2024
 *      Author: truon
 */

#include "software_timer.h"

int timer_flag[10] = {0};
int timerDot_counter = 0;
int timerDot_flag = 0;
int timer_counter[10] = {0};
int TIMER_CYCLE = 10;

void setTimerDot(int duration){
	timerDot_flag = 0;
	timerDot_counter = duration / TIMER_CYCLE;
}
void setTimer(int num, int duration){
	timer_flag[num] = 0;
	timer_counter[num] = duration / TIMER_CYCLE;
}

void timerRun(){
	if(timerDot_counter > 0){
		timerDot_counter--;
		if (timerDot_counter <= 0){
			timerDot_flag = 1;
		}
	}

	if(timer_counter[0] > 0){
		timer_counter[0]--;
		if (timer_counter[0] <= 0){
			timer_flag[0] = 1;
		}
	}

	if(timer_counter[1] > 0){
		timer_counter[1]--;
		if (timer_counter[1] <= 0){
			timer_flag[1] = 1;
		}
	}
}
