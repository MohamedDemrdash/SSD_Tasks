/******************************************************************************
 *
 * Module: BUTTON
 *
 * Layer : EUCAL
 *
 * File Name: BUTTON_program.c
 *
 * Description: Source file for ATMEGA32A Microcontroller - BUTTON Driver
 *
 * Author: Mohamed Demrdash
 ******************************************************************************/
#include "../../utilities/STD_Types.h"
#include "SW_interface.h"
#include "../../MCAL/DIO Driver/DIO_interface.h"

void SW_VoidInit(SW_Type SW)
{
	DIO_Type PIN = {SW.Port,SW.Pin,INPUT,LOW};
	DIO_VoidSetPinDir(PIN);
}

uint8_t SW_Uint8GetPressed(SW_Type SW)
{
	uint8_t Get_Pressed = SW_NOT_PRESSED;
	DIO_Type PIN = {SW.Port,SW.Pin,INPUT};
	if (SW.Pull_State == SW_PULL_DOWN)
	{
		if (LOW == DIO_Uint8ReadPin(PIN))
		{
			Get_Pressed = SW_NOT_PRESSED;
		}
		else if (HIGH == DIO_Uint8ReadPin(PIN))
		{
			Get_Pressed = SW_PRESSED;
		}
	}
	else if (SW.Pull_State == SW_PULL_UP)
	{
		if (HIGH == DIO_Uint8ReadPin(PIN))
		{
			Get_Pressed = SW_NOT_PRESSED;
		}
		else if (LOW == DIO_Uint8ReadPin(PIN))
		{
			Get_Pressed = SW_PRESSED;
		}
	}
	return Get_Pressed; 
}

