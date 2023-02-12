/******************************************************************************
 *
 * Module: LED
 *
 * Layer : EUCAL
 *
 * File Name: LED_interface.h
 *
 * Description: Header file for ATMEGA32A Microcontroller - LED Driver
 *
 * Author: Mohamed Demrdash
 ******************************************************************************/

#ifndef LED_interface_H_
#define LED_interface_H_

#include "../../utilities/STD_Types.h"

// Port Defines
#define  LED_PORTA  0
#define  LED_PORTB  1
#define  LED_PORTC  2
#define  LED_PORTD  3

//Active State
#define ACTIVE_HIGH    1
#define ACTIVE_LOW     0


typedef struct{
	
	uint8_t Port : 2         ;
	uint8_t Pin  : 3         ;
	uint8_t Active_State : 1 ;
	
}LED_Type;


void LED_Init(LED_Type LED);

void LED_On(LED_Type LED);

void LED_Off(LED_Type LED);

void LED_Tog(LED_Type LED);

//void LED_blink(LED_Type led,uint8_t delay);

void LED_Init_Port(uint8_t Port);

#endif /* LED_interface_H_ */