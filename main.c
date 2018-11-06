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
char String_Data[] ="Hao Oc Cho kkk ";
// You must change size of string in HC595.h
/******************************************************/


uint8_t Payload[]={};
uint8_t Temp[Num_Row]={};
int main(void)
{
    /* Replace with your application code */
	HC595_Init();
	Load_Data(String_Data, Payload);
	//Dich_Data(Temp,Payload,16);
    while (1) 
    {
		for(int i=0; i<Num_Row_String; i++){
			Dich_Data(Temp,Payload,i);
			
			for(int j=0; j<25; j++){   // speed 
				Output_Data(Temp);
			}
			
		}
		//Clear_Temp(Temp);
		
		//Output_Data(Temp);
    }
	
}

