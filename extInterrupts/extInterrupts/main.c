/*
 * extInterrupts.c
 *
 * Created: 30/09/2023 02:26:41
 * Author : MALWARE
 */ 

#include <avr/io.h>
#include "avr/interrupt.h"

int main(void)
{
    /* Replace with your application code */
	DDRB =0x00;
	DDRD =0xff;
	EIMSK |= (1<<INT3);
	sei();
    while (1) 
    {
    }
}

ISR(INT3_vect){
	PORTD ^=(1<<0);
}