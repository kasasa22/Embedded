#include <avr/io.h>

int main(void)
{
	/* Replace with your application code */
	DDRF = 0xF8; // Set the most significant 5 bits of PORTF as output (7, 6, 5, 4, 3)
	DDRJ = 0x00; // Set all pins of PORTJ as input
	PORTJ |= 0x1F; // Enable the internal pull-up resistors on all bits of PORTJ

	while (1)
	{
		// Check which button is pressed and control the corresponding LED
		switch () {
			case ((PINJ & 0x01)=0):  // Button 0 is pressed
			PORTF |= (1 << 7); // Turn on LED on bit 7 of PORTF
			break;
			case 0x02:  // Button 1 is pressed
			PORTF |= (1 << 6); // Turn on LED on bit 6 of PORTF
			break;
			case 0x04:  // Button 2 is pressed
			PORTF |= (1 << 5); // Turn on LED on bit 5 of PORTF
			break;
			case 0x08:  // Button 3 is pressed
			PORTF |= (1 << 4); // Turn on LED on bit 4 of PORTF
			break;
			case 0x10:  // Button 4 is pressed
			PORTF |= (1 << 3); // Turn on LED on bit 3 of PORTF
			break;
			default: // No button is pressed, turn off all LEDs
			PORTF &= 0x07; // Clear the bits 7, 6, 5, 4, 3 of PORTF to turn off LEDs
		}
	}
}
