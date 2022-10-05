/*
 * dio task.c
 *
 * Created: 9/29/2022 3:53:33 AM
 * Author : Dell
 */ 

#include "Application/Application.h"

int main(void)
{
	app_init();
    /* Replace with your application code */
    while (1) 
	{
		//appStart();
		LED_on(LED_1_PORT,LED_1_PIN);
		Delay_ms(500);
		LED_off(LED_1_PORT,LED_1_PIN);
		Delay_ms(300);
    }
}

