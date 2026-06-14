#include <pic.h>
#include <xc.h>

#define _XTAL_FREQ 4000000

#pragma config FOSC = XT
#pragma config WDTE = OFF
#pragma config PWRTE = ON
#pragma config CP = OFF
void delay()
{
    __delay_ms(30);
}

void main()
{
    TRISB = 0x00;
    TRISA = 0x00;
    PORTA = 0x00;
    PORTB = 0x00;

while(1)
    {
        PORTA = 0b1100;
        PORTB = 0b11000000;
        delay();

        PORTA = 0b0110;
        PORTB = 0b10010000;
        delay();

        PORTA = 0b0011;
        PORTB = 0b00110000;
        delay();

        PORTA = 0b1001;
        PORTB = 0b01100000;
        delay();
    }
}