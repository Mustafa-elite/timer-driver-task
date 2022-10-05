/*
 * LED.h
 *
 * Created: 9/29/2022 12:27:36 PM
 *  Author: Dell
 */ 



#ifndef LED_H_
#define LED_H_


#include "../../MCAL/DIO Driver/DIO.h"


#define LED_1_PORT PORT_A
#define LED_1_PIN  PIN4

#define LED_2_PORT PORT_A
#define LED_2_PIN  PIN5

#define LED_3_PORT PORT_A
#define LED_3_PIN  PIN6



void LED_init(u8 ledPort,u8 ledPin);
void LED_on(u8 ledPort,u8 ledPin);
void LED_off(u8 ledPort,u8 ledPin);
void LED_toggle(u8 ledPort,u8 ledPin);



#endif /* LED_H_ */