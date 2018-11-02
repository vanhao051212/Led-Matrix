/*
 * MyLibrary.h
 *
 * Created: 30-Oct-18 12:47:54 PM
 *  Author: Hao
 */ 


#ifndef MYLIBRARY_H_
#define MYLIBRARY_H_

#include <avr/io.h>
#include <util/delay.h>
#include <avr/sfr_defs.h>

#define FCPU	8000000UL

#define sbi(port,bit)	(port)|=(1<<bit)
#define cbi(port,bit)	(port)&=~(1<<bit)
#define tbi(port,bit)	(port)^=(1<<bit)











#endif /* MYLIBRARY_H_ */