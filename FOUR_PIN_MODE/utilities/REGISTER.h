/*
 *  REGISRE.h
 *
 *  DESCRIPTION : THis file decalres addresses fof register at atmega32 with thier names
 *  Author: Mohamed Demrdash
 */
 
 #ifndef REGISRE_H_
 #define REGISRE_H_
 /* PORT A */

 #define PORTA *((volatile uint8_t * )(0x3B))
 #define DDRA  *((volatile uint8_t * )(0x3A))
 #define PINA  *((volatile uint8_t * )(0x39))
 
 /* PORT B */

 #define PORTB *((volatile uint8_t * )(0x38))
 #define DDRB  *((volatile uint8_t * )(0x37))
 #define PINB  *((volatile uint8_t * )(0x36))
 
 /* PORT C */

 #define PORTC *((volatile uint8_t * )(0x35))
 #define DDRC  *((volatile uint8_t * )(0x34))
 #define PINC  *((volatile uint8_t * )(0x33))
 
 /* PORT D */

 #define PORTD *((volatile uint8_t * )(0x32))
 #define DDRD  *((volatile uint8_t * )(0x31))
 #define PIND  *((volatile uint8_t * )(0x30))
 
 #endif