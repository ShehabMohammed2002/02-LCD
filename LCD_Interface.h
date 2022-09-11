/*
 *  File : LCD_Interface.h
 *  DATE: þ10/9/2022
 *  Author: Shehab aldeen
 *  Version : V1
 *  Describtion : --------------
 */
#include"../LIB/STD_TYPES.h"
#include"../LIB/BIT_MATH.h"

#ifndef LCD_INTERFACE_H_
#define LCD_INTERFACE_H_
 
void LCD_VidInit();
void LCD_VidSendCommend(u8 Copy_U8Commend);
void LCD_VidSendChar(u8 Copy_U8Char);
void LCD_VidSendString(u8 Copy_U8String[] );
void LCD_VidPrintVar(u32 Copy_U8Var);
u32 LCD_U32Pow(u8 Copy_U8Base , u8 Copy_U8Bow );

#endif
