/*
 * HC595.h
 *
 * Created: 30-Oct-18 12:55:55 PM
 *  Author: Hao
 */ 

/**************************************/
/* uses 8 pin to control
/* 4 pin control row
/* 4 pin control col
/**************************************/
#include "MyLibrary.h"

#ifndef HC595_H_
#define HC595_H_

#define DDR_595_R	DDRD
#define PORT_595_R	PORTD

#define DDR_595_C	DDRD
#define PORT_595_C	PORTD

#define SHCP_R		0
#define DS_R		1
#define RST_R		3

#define SHCP_C		4
#define DS_C		5
#define RST_C		6

#define STCP		2          // output data together  using port 595_R

#define Num_Row	24

#define Time_Delay	1000
void HC595_Init(void);

void Shift_Bit_C(uint8_t Bit);
void Shift_Bit_R(uint8_t Bit);

uint8_t Check_Bit(uint8_t Data, uint8_t Addr);
void HC595_Output();                    // hien thi ra led matrix

void HC595_Reset_C();
void HC595_Reset_R();

void HC595_Reset_All();

void Shift_Data_C(uint8_t Data);			// dua data vao 74hc595

void Shift_Data(uint8_t Payload[Num_Row]);		// hien thi data ra led matrix

void Add( uint8_t Char[6] ,uint8_t Payload[], uint8_t Addr); //Add ki tu vao mang (phuc vu cho Load_Data() )
void Load_Data(char Data [], uint8_t Payload[]); //chuyen data tu chuoi ki tu sang Bin


#endif /* HC595_H_ */