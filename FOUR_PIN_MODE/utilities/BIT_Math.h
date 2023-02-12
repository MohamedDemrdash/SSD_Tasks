/*
 * BIT_Math.h
 *
 * Created: 2/6/2023 9:25:57 PM
 *  Author: Mohamed Demrdash
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define  REGISTER_SIZE      8
#define  SET_BIT(reg,bit)   reg |= (1<<bit)
#define  CLEAR_BIT(reg,bit) reg &= ~(1<<bit)
#define  TOG_BIT(reg,bit)   reg ^= (1<<bit)
#define  READ_BIT(reg,bit)  ((reg>>bit)&1)
#define  ROR(reg,bit)       reg=(reg>>bit)|(reg<<(REGISTER_SIZE - bit))
#define  ROL(reg,bit)       reg=(reg<<bit)|(reg>>(REGISTER_SIZE - bit))



#endif /* BIT_MATH_H_ */