/*
 * keypad1.c
 *
 * Created: 02/10/2023 12:12:31
 * Author : MALWARE
 */ 

#include <avr/io.h>


int main(void)
{
	DDRH = 0xf0;
	DDRF = 0xff;
	PORTF = 0xFF;
	
	
	
    /* Replace with your application code */
    while (1) 
    {
		PORTH|= 0b11011111;
		if((PINH&0x01)== 0x0){
			PORTF |= (1<<0);
    }
	 else if((PINH&0x02)== 0x0){
		 PORTF |= (1<<3);
	 }
	 else if((PINH&0x04)== 0x0){
		 PORTF |= (1<<6);
	 }
	
	PORTH = 0b11101111;
		if((PINH&0x01)== 0x0){
			PORTF |= (1<<1);
		}
		 else if((PINH&0x02)== 0x0){
			 PORTF |= (1<<4);
		 }
		 else if((PINH&0x04)== 0x0){
			 PORTF |= (1<<7);
		 }
	 
	 
	
}
}

