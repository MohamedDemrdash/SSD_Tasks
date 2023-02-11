/******************************************************************************
 *
 * Layer : Application
 *
 * File Name: Application.c
 *
 * Description: Source file for ATMEGA32A Microcontroller - Application
 *
 * Author: Mohamed Demrdash
 ******************************************************************************/
#include "../utilities/STD_Types.h"
#include "../EUCAL/LED Driver/LED_interface.h"
#include "../EUCAL/BUTTON Driver/SW_interface.h"
#include "../EUCAL//SSD Driver/SSD_interface.h"
#include "util/delay.h"
#include "application.h"


LED_Type LED1 ={LED_PORTA,1,ACTIVE_HIGH};
LED_Type LED2 ={LED_PORTA,2,ACTIVE_HIGH};
SSD_Type SSD ={SSD_COMMON_CATHODE,SSD_PORTD,SSD_PORTB,7};	
SW_Type SW1 = {SW_PORTC,0,SW_PULL_DOWN};
	
void App_init(void)
{
	LED_Init(LED1);
	LED_Init(LED2);
	SSD_voidInitialDataPort(SSD);
	SSD_voidEnable(SSD);
	SW_VoidInit(SW1);
}

void App_start(void)
{
	uint8_t i =0;
	while(1)
	{
		if(SW_Uint8GetPressed(SW1))
		{
			SSD_voidSendNumber(SSD,i);
			i++;
			_delay_ms(750);
		}
	}
}