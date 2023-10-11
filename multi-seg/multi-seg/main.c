/*
 * multi-seg.c
 *
 * Created: 06/10/2023 16:28:04
 * Author : MALWARE
 */ 

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    /* Replace with your application code */
	DDRH =  0xff;
	DDRJ =  0xff;
	
    while (1) 
    { 
		PORTJ = 0b11111110;
		PORTH= 0b01011011;
		_delay_ms(1);
		
		PORTJ = 0b11111101;
		PORTH= 0b11100110;
		_delay_ms(1);
		
		PORTJ = 0b11111011;
		PORTH= 0b01111111;
		_delay_ms(1);
		
		PORTJ = 0b11110111;
		PORTH= 0b01100110;
		_delay_ms(1);
    }
}

