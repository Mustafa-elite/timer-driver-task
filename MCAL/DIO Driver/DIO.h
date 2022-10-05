/*
 * DIO.h
 *
 * Created: 9/29/2022 4:12:10 AM
 *  Author: Dell
 */ 


#ifndef DIO_H_
#define DIO_H_

#include "../registers.h"


#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D' 

#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7




#define IN 0
#define OUT 1

#define LOW 0
#define HIGH 1

void DIO_init(u8 portNumber,u8 pinNumber,u8 direction);
void DIO_write(u8 portNumber,u8 pinNumber,u8 value);
void DIO_read(u8 portNumber,u8 pinNumber,u8 *value);
void DIO_toggle(u8 portNumber,u8 pinNumber);


#endif /* DIO_H_ */