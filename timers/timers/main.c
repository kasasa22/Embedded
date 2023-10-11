/*
 * timers.c
 *
 * Created: 04/10/2023 22:26:33
 * Author : MALWARE
 */ 

#include <avr/io.h>
# include <avr/interrupt.h>

#define F_CPU 1000000UL


int main(void)
{
    /* Replace with your application code */
	DDRB = 0xff;
	TCCR0 =(1<<WGM01)|(1<<CS01)|(1<<CS00);
	OCR0 = (F_CPU/(64*1))-1;
	TIMSK |=(1<<OCIE0);
	
	sei();
	
    while (1) 
    {
		
    }
	return 0;
}
ISR(TIMER0_COMP_vect){
	PORTB ^= 0b00000010;
}

