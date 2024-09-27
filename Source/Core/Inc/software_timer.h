/*
 * software_timer.h
 *
 *  Created on: Sep 27, 2024
 *      Author: truon
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer_flag[10];
extern int timerDot_flag;

void setTimer(int num, int duration);
void setTimerDot(int duration);
void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
