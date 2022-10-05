/*
 * DIO.c
 *
 * Created: 9/29/2022 4:11:46 AM
 *  Author: Dell
 */ 

#include "DIO.h"


void DIO_init(u8 portNumber,u8 pinNumber,u8 direction)
{
	switch(portNumber)
	{
		case PORT_A:
		if(direction==OUT)
		{
		DDRA |=(1<<pinNumber);
		}
		else if(direction==IN)
		{
			
			DDRA &= ~(1<<pinNumber);
		}
		else
		{
			//error handling
		}
		break;
		
		case PORT_B:
		if(direction==OUT)
		{
			DDRB |=(1<<pinNumber);
		}
		else if(direction==IN)
		{
					
			DDRB &= ~(1<<pinNumber);
		}
		else
		{
			//error handling
		}
		break;
		
		case PORT_C:
		if(direction==OUT)
		{
			DDRC |=(1<<pinNumber);
		}
		else if(direction==IN)
		{
			
			DDRC &= ~(1<<pinNumber);
		}
		else
		{
			//error handling
		}
		break;
		
		case PORT_D:
		if(direction==OUT)
		{
			DDRD |=(1<<pinNumber);
		}
		else if(direction==IN)
		{
			
			DDRD &= ~(1<<pinNumber);
		}
		else
		{
			//error handling
		}
		break;

	}
}




void DIO_write(u8 portNumber,u8 pinNumber,u8 value)
{
	switch(portNumber)
	{
		case PORT_A:
		if(value==HIGH)
		{
			PORTA |=(1<<pinNumber);
		}
		else if(value==LOW)
		{
				
			PORTA &= ~(1<<pinNumber);
		}
		else
		{
			//error handling
		}
		break;
			
		case PORT_B:
		if(value==HIGH)
		{
			PORTB |=(1<<pinNumber);
		}
		else if(value==LOW)
		{
				
			PORTB &= ~(1<<pinNumber);
		}
		else
		{
			//error handling
		}
		break;
			
		case PORT_C:
		if(value==HIGH)
		{
			PORTC |=(1<<pinNumber);
		}
		else if(value==LOW)
		{
				
			PORTC &= ~(1<<pinNumber);
		}
		else
		{
			//error handling
		}
		break;
			
		case PORT_D:
		if(value==HIGH)
		{
			PORTD |=(1<<pinNumber);
		}
		else if(value==LOW)
		{
				
			PORTD &= ~(1<<pinNumber);
		}
		else
		{
			//error handling
		}
		break;

	}
}
void DIO_read(u8 portNumber,u8 pinNumber,u8 *value)
{
	switch(portNumber)
	{
		case PORT_A:
		*value=(PINA &(1<<pinNumber))>>pinNumber;
		break;
			
		case PORT_B:
        *value=(PINB &(1<<pinNumber))>>pinNumber;
		break;
			
		case PORT_C:
		*value=(PINC &(1<<pinNumber))>>pinNumber;
		break;
			
		case PORT_D:
		*value=(PIND &(1<<pinNumber))>>pinNumber;
		break;
	}
}
void DIO_toggle(u8 portNumber,u8 pinNumber)
{
	switch(portNumber)
	{
		case PORT_A:
		PORTA ^= (1<<pinNumber);
		break;
		
		case PORT_B:
		PORTB ^= (1<<pinNumber);
		break;
		
		case PORT_C:
		PORTC ^= (1<<pinNumber);
		break;
		
		case PORT_D:
		PORTD ^= (1<<pinNumber);
		break;
	}
}