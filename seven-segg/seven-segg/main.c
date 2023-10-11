/*
 * seven-segg.c
 *
 * Created: 03/10/2023 06:07:55
 * Author : MALWARE
 */ 

#include <avr/io.h>


int main(void)
{
	DDRK = 0xff;
	DDRF = 0b11111000;
	
    /* Replace with your application code */
    while (1) 
    {
		PORTF |=0b11111110;
		if((PINF & 0x01)==0x0){
		PORTK |= 0b00000110;
		}
    }
}

