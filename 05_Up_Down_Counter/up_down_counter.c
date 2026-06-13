#include <pic.h>  // Include the header file for the PIC microcontroller 

 

// Function to generate a delay 
void delay() { 
    int j; 
    // Simple for-loop that creates a delay by counting up to 9000 
    for (j = 0; j < 9000; j++);  
} 

 

void main() { 
    int i; 

 

    // Array holding the binary values to display digits 0-9 on a 7-segment display 
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
        0b01101111  // 9 
    }; 

 

    TRISB = 0;  // Set PORTB as output (for driving the 7-segment display) 
    TRISA = 1;  // Set PORTA as input (to detect an external signal) 

 

    while(1) { 
        // If PORTA is low (input signal is 0), count forward from 0 to 9 
        if (PORTA == 0) 
        {
            for (i = 0; i < 10; i++) { 
                PORTB = segment_values[i];  // Output the current digit to the 7-segment display 
                delay();  // Call delay function to create a visible transition 
            } 
        }  
        // If PORTA is high (input signal is 1), count backward from 9 to 0 
        else {  
            for (i = 9; i >= 0; i--) { 
                PORTB = segment_values[i];  // Output the current digit to the 7-segment display 
                delay();  // Call delay function to create a visible transition 
            } 
        } 
    } 
} 
        
