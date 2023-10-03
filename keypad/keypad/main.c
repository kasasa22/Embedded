/*
 * keypad.c
 *
 * Created: 27/09/2023 03:48:57
 * Author : MALWARE
 */ 

#include <avr/io.h>



int main(void)
{ 
	DDRJ=0xff;
	DDRK =0x00;
	
	int i;
    /* Replace with your application code */
    while (1) 
    {
		/*PORTJ =0x00;
		for (i=0;i<100;i++);
		PORTJ =0XFF;
		for (i=0;i<100;i++);*/
		if ((PINK & 0x08) == 0x00)
		{
			PORTJ |=(1<<1);
		}
		else{
			PORTJ &=~(1<<1);
		}
    }
}

