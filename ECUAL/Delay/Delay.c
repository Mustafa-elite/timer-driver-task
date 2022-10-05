/*
 * Delay.c
 *
 * Created: 10/5/2022 1:59:54 PM
 *  Author: Dell
 */ 





#include "Delay.h"


void Delay_init()
{
	TIMER_init();
}
void Delay_ms(u32 msDelay)
{
	float timerTick = 0, initValueBuffer = 0;
	unsigned int overFlowsNum = 0, overFlowsCounter = 0, preScalerValue=1;
	unsigned char  timerInitValue = 0;
	EN_PRESCALER preScalerType = PRESCALER8;
	if (msDelay < 100)
	{
		preScalerType = PRESCALER8;
		preScalerValue = 8;
	}
	else if (msDelay < 1000)
	{
		preScalerType = PRESCALER64;
		preScalerValue = 64;
	}
	else if (msDelay < 10000)
	{
		preScalerType = PRESCALER256;
		preScalerValue = 256;
	}
	else
	{
		preScalerType = PRESCALER1024;
		preScalerValue = 1024;
	}
	timerTick = (float)preScalerValue / CPU_FREQUENCY;
	overFlowsNum = (int)(((float)msDelay/1000) / (timerTick * 256)) + 1;
	initValueBuffer = 256 - ((((float)msDelay / 1000) / timerTick) / (overFlowsNum));
	timerInitValue = initValueBuffer;
	initValueBuffer -= timerInitValue;
	initValueBuffer *= 100;
	if (initValueBuffer >= 50)
	{
		timerInitValue++;
	}
	else
	{
	}
	TIMER_set_value(timerInitValue);
	TIMER_start(preScalerType);
	while(overFlowsCounter<overFlowsNum)
	{
		while((TIFR&(1<<0))==0);
// 		{
// 			TIMER_get_state(&timerState);
// 		}
		//TIMER_set_value(timerInitValue);
		TIMER_reset_TIFR();
		overFlowsCounter++;
		
	}
	TIMER_stop();
	
}