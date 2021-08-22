
/**********************************************************************************************/
/* Author       : Mostafa Zween                                                               */
/* Date         : 22/8/2021 10:30:30 AM                                                       */
/* version      : 01                                                                          */
/**********************************************************************************************/

#define F_CPU 8000000UL
#include <util/delay.h>
#include "BUTTON_interface.h"
#include "LCD_interface.h"
unsigned int  count1=0;
unsigned int  count2=0;
unsigned int  count3=0;
unsigned int  count4=0;
int main(void)
{
	LCD_Init();
	BUTTON_Init('B',0);
	BUTTON_Init('B',1);
	BUTTON_Init('B',2);
	BUTTON_Init('B',3);
	BUTTON_Init('D',0);
	LCD_SendString("sisi:");
	LCD_MoveCursor(1,8);
	LCD_SendString("Ali :");
	LCD_MoveCursor(2,1);
	LCD_SendString("Amr :");
	LCD_MoveCursor(2,8);
	LCD_SendString("saad:");
	while (1)
	{
		LCD_MoveCursor(1,6);
		LCD_SendNumber(count1);
		LCD_MoveCursor(1,15);
		LCD_SendNumber(count2);
		LCD_MoveCursor(2,6);
		LCD_SendNumber(count3);
		LCD_MoveCursor(2,15);
		LCD_SendNumber(count4);
		unsigned char read1=BUTTON_Read('B',0);
		unsigned char read2=BUTTON_Read('B',1);
		unsigned char read3=BUTTON_Read('B',2);
		unsigned char read4=BUTTON_Read('B',3);
		unsigned char read5=BUTTON_Read('D',0);
		if(read1==1)
		{
			count1++;
		}
		else if(read2==1)
		{
			count2++;
		}
		else if(read3==1)
		{
			count3++;
		}
		else if(read4==1)
		{
			count4++;
		}
		else if(read5==1)
		{
			count1=count2=count3=count4=0;
		}
		_delay_ms(150);
	}
}

