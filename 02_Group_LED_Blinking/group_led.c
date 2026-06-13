#include <pic.h> 
void main() 
{ 
TRISB = 0x00; 
int i ; 
while (1) 
{PORTB = 0xF0 ; 
for (i =0 ; i<5000; i++); 
PORTB = 0x0F; 
for (i =0; i<5000; i++); 
} 
}
