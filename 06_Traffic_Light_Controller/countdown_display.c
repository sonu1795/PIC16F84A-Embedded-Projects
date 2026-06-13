#include <pic.h> 
#include <xc.h>
#define _XTAL_FREQ 4000000

void main() { 
int i;

// Array for 7-segment display values for digits 0 to 9 
unsigned char segment_values[10] = { 
0b00111111, // 0 
0b00000110, // 1 
0b01011011, // 2 
0b01001111, // 3 
0b01100110, // 4 
0b01101101, // 5 
0b01111101, // 6 
0b00000111, // 7 
0b01111111, // 8 
0b01101111 // 9 
}; 
TRISB = 0; // Set PORTB as output 
while(1) { 
for (i = 9; i >= 0; i--) 
{
    PORTB = segment_values[i]; // Display the digit on 7-segment display 
    __delay_ms(1000);
} // Add delay between updates 
} 
}  