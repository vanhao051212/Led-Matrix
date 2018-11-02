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
char String_Data[] = {};
// You must change size of string in HC595.c
/******************************************************/



uint8_t Payload[]={0b00011111  , 0b00100100};
int main(void)
{
    /* Replace with your application code */
	HC595_Init();
	Load_Data(String_Data, Payload);
    while (1) 
    {
		Shift_Data(Payload);
		_delay_ms(500);
		HC595_Reset_All();
		HC595_Output();
		_delay_ms(500);
    }
	
}

