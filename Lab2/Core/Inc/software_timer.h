/*
 * software_timer.h
 *
 *  Created on: Oct 8, 2025
 *      Author: ADMIN-5540
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag;
void setTimer1(int duration);

extern int timer0_flag;
void setTimer0(int duration);

extern int timer2_flag;
void setTimer2(int duration);

extern int timer3_flag;
void setTimer3(int duration);

void timerRun();



#endif /* INC_SOFTWARE_TIMER_H_ */
