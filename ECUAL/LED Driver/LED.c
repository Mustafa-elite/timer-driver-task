/*
 * LED.c
 *
 * Created: 9/29/2022 12:27:21 PM
 *  Author: Dell
 */ 

#include "LED.h"

void LED_init(u8 ledPort,u8 ledPin)
{
	DIO_init(ledPort,ledPort,OUT);
}
void LED_on(u8 ledPort,u8 ledPin)
{
	DIO_write(ledPort,ledPin,HIGH);
}
void LED_off(u8 ledPort,u8 ledPin)
{
	DIO_write(ledPort,ledPin,LOW);
}
void LED_toggle(u8 ledPort,u8 ledPin)
{
	DIO_toggle(ledPort,ledPin);
// 	u8 ledStatus=LOW;
// 	DIO_read(ledPort,ledPin,&ledStatus);
// 	if(LOW==ledStatus)
// 	{
// 		DIO_write(ledPort,ledPin,HIGH);
// 	}
// 	else
// 	{
// 		DIO_write(ledPort,ledPin,LOW);
// 	}
}