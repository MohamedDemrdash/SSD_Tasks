/*
 * STD_Types.h
 *
 * Created: 2/6/2023 9:24:47 PM
 *  Author: Mohamed Demrdash
 */ 


#ifndef STD_TYPES_H_
#define STD_TYPES_H_


/*Define data types*/
typedef unsigned char            uint8_t;
//typedef unsigned short int       uint16_t;
typedef unsigned long int        uint32_t;
typedef unsigned long long int   uint64_t;
typedef signed char              sint8_t;
typedef signed short int         sint16_t;
typedef signed long int          sint32_t;
typedef signed long  long int    sint64_t;
typedef float                    float32_t;
typedef double                   float64_t;

/*Define dircations of pins*/

#define input  0
#define INPUT  0
#define output 1
#define OUTPUT 1

/*Define values of pins */
#define low  0
#define LOW  0
#define high 1
#define HIGH 1


#endif /* STD_TYPES_H_ */