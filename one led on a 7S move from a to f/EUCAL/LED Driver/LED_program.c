/******************************************************************************
 *
 * Module: LED
 *
 * Layer : EUCAL
 *
 * File Name: LED_program.c
 *
 * Description: Source file for ATMEGA32A Microcontroller - LED Driver
 *
 * Author: Mohamed Demrdash
 ******************************************************************************/
#include "../../utilities/STD_Types.h"
#include "../../MCAL/DIO Driver/DIO_interface.h"
#include "LED_interface.h"

void LED_Init(LED_Type LED)
{
	if (LED.Active_State == ACTIVE_HIGH)
	{
		DIO_Type PIN = {LED.Port,LED.Pin,OUTPUT,LOW};
		DIO_VoidSetPinDir(PIN);
		DIO_VoidWritePin(PIN);
	}
	else if (LED.Active_State == ACTIVE_LOW)
	{
		DIO_Type PIN = {LED.Port,LED.Pin,OUTPUT,HIGH};
		DIO_VoidSetPinDir(PIN);
		DIO_VoidWritePin(PIN);
	}
}

void LED_On(LED_Type LED)
{
	if (LED.Active_State == ACTIVE_HIGH)
	{
		DIO_Type PIN = {LED.Port,LED.Pin,OUTPUT,HIGH};
		DIO_VoidWritePin(PIN);
	}
	else if (LED.Active_State == ACTIVE_LOW)
	{
		DIO_Type PIN = {LED.Port,LED.Pin,OUTPUT,LOW};
		DIO_VoidWritePin(PIN);
	}
}

void LED_Off(LED_Type LED)
{
	if (LED.Active_State == ACTIVE_HIGH)
	{
		DIO_Type PIN = {LED.Port,LED.Pin,OUTPUT,LOW};
		DIO_VoidWritePin(PIN);
	}
	else if (LED.Active_State == ACTIVE_LOW)
	{
		DIO_Type PIN = {LED.Port,LED.Pin,OUTPUT,HIGH};
		DIO_VoidWritePin(PIN);
	}
}

void LED_Tog(LED_Type LED)
{
	DIO_Type PIN = {LED.Port,LED.Pin,OUTPUT,LOW};
	DIO_VoidTogglePin(PIN);
}

/*void LED_blink(LED_Type LED,uint8_t delay)
{
	DIO_Type PIN = {LED.Port,LED.Pin,OUTPUT,LOW};
	DIO_toggle_pin(PIN);
	//Delay(delay):
}*/

void LED_Init_Port(uint8_t Port)
{
	DIO_VoidSetPortDir(Port,PORT_OUT);
}