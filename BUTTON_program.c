﻿
/**********************************************************************************************/
/* Author       : Mostafa Zween                                                               */
/* Date         : 02/8/2021 02:14:30 PM                                                       */
/* version      : 01                                                                          */
/**********************************************************************************************/

#include "DIO_interface.h"
void BUTTON_Init(unsigned char port,unsigned char pin)
{
	DIO_SetPinDir(port,pin,0);
}
unsigned char BUTTON_Read(unsigned char port,unsigned char pin)
{
	unsigned char x;
	x= DIO_ReadPin(port,pin);
	return x;
}
void BUTTON_EnablePullUp(unsigned char port,unsigned char pin,unsigned char enable)
{
	DIO_EnablePullUp(port,pin,enable);
}