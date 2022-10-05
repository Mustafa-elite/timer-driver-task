/*
 * Timer.c
 *
 * Created: 10/5/2022 1:28:45 AM
 *  Author: Dell
 */ 

#include "Timer.h"

void TIMER_init()
{
	TCCR0 = 0x00;
}
void TIMER_start(EN_PRESCALER preSalerMode)
{
	TCCR0 |=preSalerMode;
}
void TIMER_stop()
{
	TCCR0 = 0x00;
}
void TIMER_get_state(u8 *timerState)
{
	*timerState=(TIFR&(1<<0));
}
void TIMER_set_value(u8 initValue)
{
	TCNT0 = initValue;
}
void TIMER_reset_TIFR()
{
	TIFR |=(1<<0);
}


