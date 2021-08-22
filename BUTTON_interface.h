/**********************************************************************************************/
/* Author       : Mostafa Zween                                                               */
/* Date         : 02/8/2021 01:14:30 PM                                                       */
/* version      : 01                                                                          */
/**********************************************************************************************/
#ifndef BUTTON_INTERFACE_H_
#define BUTTON_INTERFACE_H_
void BUTTON_Init(unsigned char port,unsigned char pin);
unsigned char BUTTON_Read(unsigned char port,unsigned char pin);
unsigned char BUTTON_EnablePullUp(unsigned char port,unsigned char pin,unsigned char enable);
#endif /* BUTTON_INTERFACE_H_ */