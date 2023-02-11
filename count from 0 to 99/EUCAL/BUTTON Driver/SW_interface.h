/******************************************************************************
 *
 * Module: BUTTON
 *
 * Layer : EUCAL
 *
 * File Name: SW_interface.h
 *
 * Description: Header file for ATMEGA32A Microcontroller - SWITCH Driver
 *
 * Author: Mohamed Demrdash
 ******************************************************************************/

#ifndef SW_INTERFACE_H_
#define SW_INTERFACE_H_

#include "../../utilities/STD_Types.h"

//Switch Press State
#define SW_NOT_PRESSED 0
#define SW_PRESSED     1


//Switch Pull State
#define SW_PULL_DOWN   0
#define SW_PULL_UP     1


//Port Defines
#define SW_PORTA  0
#define SW_PORTB  1
#define SW_PORTC  2
#define SW_PORTD  3


typedef struct{
	
	uint8_t Port        : 2;    //SW_PORTA , SW_PORTB , SW_PORTC or SW_PORTD
	uint8_t Pin         : 3;
	uint8_t Pull_State  : 1;    //SW_PULL_DOWN or SW_PULL_UP
	
}SW_Type;



//Functions Prototype
void    SW_VoidInit(SW_Type SW);

uint8_t SW_Uint8GetPressed(SW_Type SW);


#endif /* SW_INTERFACE_H_*/