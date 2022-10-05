/*
 * buttons.h
 *
 * Created: 9/30/2022 1:53:33 AM
 *  Author: Dell
 */ 


#ifndef BUTTONS_H_
#define BUTTONS_H_

#include "../../MCAL/DIO Driver/DIO.h"

#define BUTTON_1_PORT PORT_D
#define BUTTON_1_PIN PIN1


void BUTTON_init(u8 portNumber,u8 pinNumber);
void BUTTON_read(u8 portNumber,u8 pinNumber,u8 *value);




#endif /* BUTTONS_H_ */