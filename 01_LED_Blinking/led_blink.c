#include<pic.h> 
void main() 
{ 
int i; 
TRISB=0x00; 
while(1) 
{ 
PORTB=0xFF; 
for(i=0;i<5000;i++); 
PORTB=0x00; 
for(i=0;i<5000;i++); 
} 
}
