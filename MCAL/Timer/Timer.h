/*
 * Timer.h
 *
 * Created: 10/5/2022 1:29:25 AM
 *  Author: Dell
 */ 


#ifndef TIMER_H_
#define TIMER_H_

#include "../registers.h"

#define CPU_FREQUENCY 1000000

typedef enum {
	STOP_TIMER,
	NOPRESCALER,
	PRESCALER8,
	PRESCALER64,
	PRESCALER256,
	PRESCALER1024
	}EN_PRESCALER;



void TIMER_init();
void TIMER_start(EN_PRESCALER preSalerMode);
void TIMER_stop();
void TIMER_get_state(u8* timerState);
void TIMER_set_value(u8 initValue);
void TIMER_reset_TIFR();

#endif /* TIMER_H_ */