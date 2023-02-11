/*
 * DIO_interface.h
 *
 * Created: 2/6/2023 9:21:31 PM
 *  Author: Mohamed Demrdash
 */ 


#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

#include "../../utilities/STD_Types.h"


// Port Defines
#define  DIO_PORTA  0
#define  DIO_PORTB  1
#define  DIO_PORTC  2
#define  DIO_PORTD  3

//Port Direction
#define  PORT_OUT    0xFF
#define  PORT_IN     0x00

//Port Value
#define  PORT_HIGH   0xFF
#define  PORT_LOW    0x00

typedef struct{
	uint8_t Port : 2  ;
	uint8_t Num  : 3  ;
	uint8_t Dir  : 1  ;	
	uint8_t Val  : 1  ;
}DIO_Type;


//Function to control Pins 
void DIO_VoidSetPinDir(DIO_Type PIN);

void DIO_VoidWritePin(DIO_Type PIN);

void DIO_VoidTogglePin(DIO_Type PIN);

uint8_t DIO_Uint8ReadPin(DIO_Type PIN);


//Function to control Ports
void DIO_VoidSetPortDir(uint8_t Port,uint8_t Port_Dir);

void DIO_VoidWritePort(uint8_t Port,uint8_t Port_Val);

uint8_t DIO_Uint8ReadPort(uint8_t Port);

void DIO_VoidTogglePort(uint8_t Port);



#endif /* DIO_INTERFACE_H_ */