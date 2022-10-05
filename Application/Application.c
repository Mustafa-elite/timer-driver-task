/*
 * Application.c
 *
 * Created: 9/30/2022 1:18:04 AM
 *  Author: Dell
 */ 

#include "Application.h"


u8 buttonStatus;
u8 bufferButtonStatus;
u8 counter;

void app_init()
{
	LED_init(LED_1_PORT,LED_1_PIN);
	LED_init(LED_2_PORT,LED_2_PIN);
	LED_init(LED_3_PORT,LED_3_PIN);
	BUTTON_init(BUTTON_1_PORT,BUTTON_1_PIN);
	Delay_init();
}
void LedsOFF()
{
	LED_off(LED_1_PORT,LED_1_PIN);
	LED_off(LED_2_PORT,LED_2_PIN);
	LED_off(LED_3_PORT,LED_3_PIN);
}
void appStart()
{
	BUTTON_read(BUTTON_1_PORT,BUTTON_1_PIN,&buttonStatus);
	bufferButtonStatus=buttonStatus;
	while(buttonStatus==HIGH)
	{
		BUTTON_read(BUTTON_1_PORT,BUTTON_1_PIN,&buttonStatus);
	}
	if(HIGH==bufferButtonStatus)
	{
		if(counter==5)
		{
			counter=0;
		}
		else
		{
			counter++;
		}
	}
	else
	{
	}
	if(counter==0)
	{
		LedsOFF();
	}
	else if(counter==1 ||counter==5)
	{
		if(counter==1)
		{
			LED_on(LED_1_PORT,LED_1_PIN);
		}
		else
		{
			LED_off(LED_2_PORT,LED_2_PIN);
		}
	}
	else if(counter==2 ||counter==4)
	{
		if(counter==2)
		{
			LED_on(LED_2_PORT,LED_2_PIN);
		}
		else
		{
			LED_off(LED_3_PORT,LED_3_PIN);
		}
	}
	else
	{
		LED_on(LED_3_PORT,LED_3_PIN);
	}
}