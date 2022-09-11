/*
 *  File : LCD_private.h
 *  DATE: þ10/9/2022
 *  Author: Shehab aldeen
 *  Version : V1
 *  Describtion : --------------
 */

#ifdef EIGHT_BIT

#define FUNC_SET 0b00111100
#define DISPLAY_ON_OFF 0b00001110
#define DISPLAY_CLEAR  0b00000001

#endif

#ifndef EIGHT_BIT

#define FUNC_SET 0b00101100
#define DISPLAY_ON_OFF 0b00001100
#define DISPLAY_CLEAR 0b00000001

#endif

#define HIGH 1
#define LOW 0

#define PORTA 0
#define PORTB 1
#define PORTC 2
#define PORTD 3

#define RS 0
#define E 1


#ifdef FOUR_BIT

#define D7 7
#define D6 6
#define D5 5
#define D4 4

#endif
