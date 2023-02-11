/******************************************************************************
 *
 * Module: Seven Segment Display
 *
 * Layer : EUCAL
 *
 * File Name: SSD_interface.h
 *
 * Description: Header file for ATMEGA32A Microcontroller - SSD Driver
 *
 * Author: Mohamed Demrdash
 ******************************************************************************/ 


#ifndef SSD_INTERFACE_H_
#define SSD_INTERFACE_H_


// Port Defines
#define  SSD_PORTA  0
#define  SSD_PORTB  1
#define  SSD_PORTC  2
#define  SSD_PORTD  3


//Connection Configuration
#define SSD_COMMON_CATHODE  0
#define SSD_COMMON_ANODE    1


typedef struct{

	uint8_t Type       : 1 ;                 // SSD_COMMON_CATHODE or SSD_COMMON_ANODE
	uint8_t DataPort   : 2 ;                 // SSD_PORTA or SSD_PORTB or SSD_PORTC or SSD_PORTD
	uint8_t EnablePort : 2 ;                 // SSD_PORTA or SSD_PORTB or SSD_PORTC or SSD_PORTD
	uint8_t EnablePin  : 3;                 // SSD_PIN0 , SSD_PIN1 ,SSD_PIN2 , SSD_PIN3 , SSD_PIN4 , SSD_PIN5 , SSD_PIN6 , SSD_PIN7

}SSD_Type;


//Functions Prototypes
void SSD_voidInitialDataPort  ( SSD_Type SSD );
void SSD_voidEnable           ( SSD_Type SSD);
void SSD_voidDisable          ( SSD_Type SSD);
void SSD_voidSendNumber       ( SSD_Type SSD,uint8_t Number);



#endif /* SSD_INTERFACE_H_ */