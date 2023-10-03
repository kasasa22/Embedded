/*
 * main.c
 *
 * Created: 9/25/2023 2:39:58 AM
 *  Author: MALWARE
 */ 

#include <xc.h>

int main(void)
{
	DDRH =0Xff;
	PORTH =0Xff;
    while(1)
    {
        PORTH = 0x4f;
    }
}