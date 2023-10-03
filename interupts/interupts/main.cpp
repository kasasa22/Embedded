#include <avr/io.h>
#include <avr/interrupt.h>

int main(void)
{
	// Set PB0 as an output for the bulb
	DDRB |= (1 << PB0);

	// Enable global interrupts
	sei();

	// Enable INT0 external interrupt
	EIMSK |= (1 << INT0);

	// Configure INT0 to trigger on the falling edge
	EICRA |= (1 << ISC01);

	while (1)
	{
		// Your main loop code (if needed)
	}
}

ISR(INT0_vect)
{
	// Toggle the state of the bulb on PB0
	PORTB ^= (1 << PB0);
}
