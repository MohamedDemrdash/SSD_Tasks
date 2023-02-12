/******************************************************************************
 *
 * Module: Seven Segment Display
 *
 * Layer : EUCAL
 *
 * File Name: SSD_program.c
 *
 * Description: Source file for ATMEGA32A Microcontroller - SSD Driver
 *
 * Author: Mohamed Demrdash
 ******************************************************************************/ 

#include "../../utilities/STD_Types.h"
#include "../../MCAL/DIO Driver/DIO_interface.h"

#include "SSD_interface.h"
#include "SSD_private.h"


static uint8_t Numbers[10] = FOUR_PIN_MODE ;



void SSD_voidInitialDataPort( SSD_Type SSD )
{
	DIO_VoidSetPortDir(SSD.DataPort,PORT_OUT);
}
void SSD_voidEnable( SSD_Type SSD)
{
	if(SSD.Type == SSD_COMMON_CATHODE)
	{
		DIO_Type PIN = {SSD.EnablePort,SSD.EnablePin,OUTPUT,LOW};
		DIO_VoidSetPinDir(PIN);
		DIO_VoidWritePin(PIN);	
	}
	else if(SSD.Type == SSD_COMMON_ANODE)
	{
		DIO_Type PIN = {SSD.EnablePort,SSD.EnablePin,OUTPUT,HIGH};
		DIO_VoidSetPinDir(PIN);
		DIO_VoidWritePin(PIN);
	}
}
void SSD_voidDisable( SSD_Type SSD)
{
	if(SSD.Type == SSD_COMMON_CATHODE)
	{
		DIO_Type PIN = {SSD.EnablePort,SSD.EnablePin,OUTPUT,HIGH};
		DIO_VoidSetPinDir(PIN);
		DIO_VoidWritePin(PIN);
	}
	else if(SSD.Type == SSD_COMMON_ANODE)
	{
		DIO_Type PIN = {SSD.EnablePort,SSD.EnablePin,OUTPUT,LOW};
		DIO_VoidSetPinDir(PIN);
		DIO_VoidWritePin(PIN);
	}
}
void SSD_voidSendNumber( SSD_Type SSD,uint8_t Number)
{
	if (SSD.Type == SSD_COMMON_CATHODE)
	{
		DIO_VoidWritePort(SSD.DataPort,Numbers[Number%10]);
	}
	else if (SSD.Type == SSD_COMMON_ANODE)
	{
		DIO_VoidWritePort(SSD.DataPort,~Numbers[Number%10]);
	}
}