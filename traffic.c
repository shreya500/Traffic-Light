#include<avr/io.h>
#include<util/delay.h>
int main()
{
DDRD=0xff;
DDRC=0xff;
while(1)
{
PORTC=0x89;
PORTD=0x09;
_delay_ms(2000);

PORTC=0x4c;
PORTD=0x04;
_delay_ms(2000);


PORTC=0x62;
PORTD=0x02;
_delay_ms(2000);


PORTC=0x11;
PORTD=0x03;
_delay_ms(2000);
}
}
 
