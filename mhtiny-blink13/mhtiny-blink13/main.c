/*
 * mhtiny-blink13.c
 *
 * Created: 24/7/2023 11:17:33 pm
 * Author : kzw
 */ 
#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRA |= (1<<DDA1); 

    /* loop */
        while (1) {
	        PORTA ^= (1<<PORTA1);  // toggle LED pin
	        _delay_ms(500);
        }

}

