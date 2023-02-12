/******************************************************************************
 *
 * Module: Seven Segment Display
 *
 * Layer : EUCAL
 *
 * File Name: SSD_private.h
 *
 * Description: Private file for ATMEGA32A Microcontroller - SSD Driver
 *
 * Author: Mohamed Demrdash
 ******************************************************************************/ 

#ifndef SSD_PRIVATE_H_
#define SSD_PRIVATE_H_


// Common Cathode
#define SSD_NUMBER_ARR	{0b00111111 , 0b00000110 , 0b01011011 , 0b01001111 , 0b01100110 , 0b01101101 , 0b01111101 , 0b00000111 , 0b01111111 , 0b01101111}

//Load circle
#define LOAD_CIRCLE_ARR {1<<0,1<<1,1<<2,1<<3,1<<4,1<<5}
	
//4 Pin Mode
#define FOUR_PIN_MODE {0,1,2,3,4,5,6,7,8,9}

#endif /* SSD_PRIVATE_H_ */