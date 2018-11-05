/*
 * ledmatrix.c
 *
 * Created: 30-Oct-18 12:47:06 PM
 * Author : Hao
 */ 

#include <avr/io.h>
#include "MyLibrary.h"
#include "HC595.h"

/************** Change your String here ***************/
char String_Data[] ="Haizz";
// You must change size of string in HC595.c
/******************************************************/


uint8_t Payload[]={};
int main(void)
{
    /* Replace with your application code */
	HC595_Init();
	Load_Data(String_Data, Payload);
    while (1) 
    {
		//Shift_Data_S(0xff,0b11111111);
		Output_Data(Payload);
    }
	
}

