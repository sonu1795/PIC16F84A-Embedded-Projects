// Code for Traffic light (LEDs) 

#include <pic.h> 
#include <xc.h>
#define _XTAL_FREQ 4000000

// 10-second delay function
void delay_10s()
{
    int i;
    for(i = 0; i < 10; i++)
    {
        __delay_ms(1000);
    }
}

void main()
{
TRISB = 0x00;   // Configure PORTB as output

while(1)
{
    PORTB = 0b01011010;
    delay_10s();

    PORTB = 0b01101001;
    delay_10s();

    PORTB = 0b01010101;
    delay_10s();

    PORTB = 0b10011001;
    delay_10s();
}
}