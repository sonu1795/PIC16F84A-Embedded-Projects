#include <pic.h>

void main()
{
    int i;
    int t = 0;

    TRISB = 0x00;

    while(1)
    {
        PORTB = 0b00000001;

        // Left to Right
        for(t = 0; t < 7; t++)
        {
            for(i = 0; i < 500; i++);

            PORTB = PORTB << 1;

            for(i = 0; i < 500; i++);
        }

        // Right to Left
        for(t = 0; t < 7; t++)
        {
            for(i = 0; i < 500; i++);

            PORTB = PORTB >> 1;

            for(i = 0; i < 500; i++);
        }
    }
}