/*
 * buttons.c
 *
 * Created: 9/30/2022 1:53:16 AM
 *  Author: Dell
 */ 

#include "buttons.h"

void BUTTON_init(u8 portNumber,u8 pinNumber)
{
	DIO_init(portNumber,pinNumber,IN);
}
void BUTTON_read(u8 portNumber,u8 pinNumber,u8 *value)
{
	DIO_read(portNumber,pinNumber,value);
}