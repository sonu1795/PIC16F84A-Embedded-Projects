#include<pic.h> 
void delay() 
{ 
int t; 
for (t=0;t<10000;t++); 
} 
void main()
{ 
int i; 
int j; 
int x; 
// Displaying "SUBODH" in 5x7 LED display 
// only first 4 [0-3] bits used instead of 5 columns 
unsigned char subodh[6][4] ={ 
//representation of S 
{0b00110000, 0b00110110, 0b00110110, 0b00000110},  
//representation of U 
{0b00000000, 0b00111111, 0b00111111, 0b00000000},  
//representation of B 
{0b00000000, 0b00110110, 0b00110110, 0b01000001},  
//representation of 0 
{0b00000000, 0b00111110, 0b00111110, 0b00000000},  
//representation of D 
{0b00000000, 0b00111110, 0b00111110, 0b01000001},  
//representation of H 
{0b00000000, 0b01110111, 0b01110111, 0b00000000} 
}; 
TRISA = 0x00; 
TRISB = 0x00; 
while(1) 
{ 
 for (x=0;x<6;x++)// Row Loop for subodh Array 
 { 
 for (i=0;i<30;i++) // Loop to Hold Letters 
 { 
 PORTA = 0b00000001; 
 PORTB = subodh[x][0]; 
 for (j=0;j<100;j++); 
 PORTA = 0b00000010; 
 PORTB = subodh[x][1]; 
 for (j=0;j<100;j++); 
 PORTA = 0b00000100; 
 PORTB = subodh[x][2]; 
 for (j=0;j<100;j++); 
 PORTA = 0b00001000; 
 PORTB = subodh[x][3]; 
 for (j=0;j<100;j++); 
 } 
 PORTA = 0b00000000; 
 PORTB = 0b00000000; 
 delay(); 
 } 
 delay(); //delay 
 } 
} 