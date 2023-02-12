/*
 * DIO_program.c
 *
 * Created: 2/6/2023 9:20:05 PM
 *  Author: Mohamed Demrdash
 */ 

#include "../../utilities/REGISTER.h"
#include "../../utilities/STD_Types.h"
#include "../../utilities/BIT_Math.h"
#include "DIO_interface.h"


//Function to control Pins 
void DIO_VoidSetPinDir(DIO_Type PIN)
{
	switch (PIN.Port)
	{
		case DIO_PORTA :
		{
			if(PIN.Dir != 0)
			{
				SET_BIT(DDRA,PIN.Num);
			}
			else
			{
				CLEAR_BIT(DDRA,PIN.Num);
			}
			break;
		}
		case DIO_PORTB :
		{
			if(PIN.Dir != 0)
			{
				SET_BIT(DDRB,PIN.Num);
			}
			else
			{
				CLEAR_BIT(DDRB,PIN.Num);
			}
			break;
		}
		case DIO_PORTC :
		{
			if(PIN.Dir != 0)
			{
				SET_BIT(DDRC,PIN.Num);
			}
			else
			{
				CLEAR_BIT(DDRC,PIN.Num);
			}
			break;
		}
		case DIO_PORTD :
		{
			if(PIN.Dir != 0)
			{
				SET_BIT(DDRD,PIN.Num);
			}
			else
			{
				CLEAR_BIT(DDRD,PIN.Num);
			}
			break;
		}		
	}
}

void DIO_VoidWritePin(DIO_Type PIN)
{
	switch(PIN.Port)
	{
		case DIO_PORTA :
		{
			if(PIN.Val != 0)
			{
				SET_BIT(PORTA,PIN.Num);
			}
			else
			{
				CLEAR_BIT(PORTA,PIN.Num);
			}
			break;			
		}
		case DIO_PORTB :
		{
			if(PIN.Val != 0)
			{
				SET_BIT(PORTB,PIN.Num);
			}
			else
			{
				CLEAR_BIT(PORTB,PIN.Num);
			}
			break;		
		}
		case DIO_PORTC :
		{
			if(PIN.Val != 0)
			{
				SET_BIT(PORTC,PIN.Num);
			}
			else
			{
				CLEAR_BIT(PORTC,PIN.Num);
			}
			break;
		}
		case DIO_PORTD :
		{
			if(PIN.Val != 0)
			{
				SET_BIT(PORTD,PIN.Num);
			}
			else
			{
				CLEAR_BIT(PORTD,PIN.Num);
			}
			break;
		}
	}
}

void DIO_VoidTogglePin(DIO_Type PIN)
{
	switch(PIN.Port)
	{
		case DIO_PORTA :
			TOG_BIT(PORTA,PIN.Num);
			break;
		case DIO_PORTB :
			TOG_BIT(PORTB,PIN.Num);
			break;
		case DIO_PORTC :
			TOG_BIT(PORTC,PIN.Num);
			break;
		case DIO_PORTD :
			TOG_BIT(PORTD,PIN.Num);
			break;	
	}	
}

uint8_t DIO_Uint8ReadPin(DIO_Type PIN)
{
	switch(PIN.Port)
	{
		case DIO_PORTA :
			PIN.Val = READ_BIT(PINA,PIN.Num);
			break;
		case DIO_PORTB :
			PIN.Val = READ_BIT(PINB,PIN.Num);
			break;
		case DIO_PORTC :
			PIN.Val = READ_BIT(PINC,PIN.Num);
			break;
		case DIO_PORTD :
			PIN.Val = READ_BIT(PIND,PIN.Num);
			break;
	}
	return PIN.Val;
}


//Function to control Ports
void DIO_VoidSetPortDir(uint8_t Port,uint8_t Port_Dir)
{
	switch(Port)
	{
		case DIO_PORTA :
			DDRA = Port_Dir;
			break;
		case DIO_PORTB :
			DDRB = Port_Dir;
			break;
		case DIO_PORTC :
			DDRC = Port_Dir;
			break;
		case DIO_PORTD :
			DDRD = Port_Dir;
			break;
	}
}

void DIO_VoidWritePort(uint8_t Port,uint8_t Port_Val)
{
	switch(Port)
	{
		case DIO_PORTA :
			PORTA = Port_Val;
			break;
		case DIO_PORTB :
			PORTB = Port_Val;
			break;
		case DIO_PORTC :
			PORTC = Port_Val;
			break;
		case DIO_PORTD :
			PORTD = Port_Val;
			break;
	}
}

uint8_t DIO_Uint8ReadPort(uint8_t Port)
{
	uint8_t val;
	switch(Port)
	{
		case DIO_PORTA :
			val = PINA;
			break;
		case DIO_PORTB :
			val = PINB;
			break;
		case DIO_PORTC :
			val = PINC;
			break;
		case DIO_PORTD :
			val = PIND;
			break;
	}
	return val;
}

void DIO_VoidTogglePort(uint8_t Port)
{
	switch(Port)
	{
		case DIO_PORTA :
			PORTA ^= PORT_HIGH;
			break;
		case DIO_PORTB :
			PORTB ^= PORT_HIGH;
			break;
		case DIO_PORTC :
			PORTC ^= PORT_HIGH;
			break;
		case DIO_PORTD :
			PORTD ^= PORT_HIGH;
			break;
	}
}