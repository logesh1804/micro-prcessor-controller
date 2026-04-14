#include <reg52.h>

#define LCD P2

sbit RS = P3^0;
sbit RW = P3^1;
sbit EN = P3^2;

void delay() {
    unsigned int i,j;
    for(i=0;i<100;i++)
        for(j=0;j<1000;j++);
}

void lcd_cmd(unsigned char c) {
    LCD = c;
    RS = 0;
    RW = 0;
    EN = 1;
    delay();
    EN = 0;
}

void lcd_data(unsigned char d) {   
    LCD = d;
    RS = 1;
    RW = 0;
    EN = 1;
    delay();
    EN = 0;
}
void str(char*str)
{
	while(*str)
	{
		lcd_cmd(*str);
		str++;
	}
}

void main() {
    lcd_cmd(0x38);
    lcd_cmd(0x0C);
    lcd_cmd(0x01);

    lcd_cmd(0x80);   // first line

    str("HELLO STR");

    lcd_cmd(0xC0);   // second line

    str("EMBEDDED");

    while(1);
}