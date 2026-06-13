#include <pic.h>

void main()
{
    int i;

    TRISB = 0x00;   // Set PORTB as output

    while(1)
    {
        PORTB = 0b01011011;   // Display 2
        for(i = 0; i < 10000; i++);

        PORTB = 0b01100110;   // Display 4
        for(i = 0; i < 10000; i++);

        PORTB = 0b00111110;   // Display U (V cannot be displayed perfectly)
        for(i = 0; i < 10000; i++);

        PORTB = 0b00111000;   // Display L
        for(i = 0; i < 10000; i++);

        PORTB = 0b01101101;   // Display S
        for(i = 0; i < 10000; i++);

        PORTB = 0b01011011;   // Display 2
        for(i = 0; i < 10000; i++);

        PORTB = 0b01001111;   // Display 3
        for(i = 0; i < 10000; i++);
    }
}