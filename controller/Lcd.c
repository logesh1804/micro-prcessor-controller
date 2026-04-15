#include <reg51.h>

#define LCD P1

sbit RS = P2^0;
sbit RW = P2^1;
sbit EN = P2^2;

void delay() {
    int i,j;
    for(i=0;i<100;i++)
        for(j=0;j<1275;j++);
}

void cmd(unsigned char c) {
    LCD = c;
    RS = 0;  // command mode
    RW = 0;
    EN = 1;
    delay();
    EN = 0;
}

void data(unsigned char d) {
    LCD = d;
    RS = 1;  // data mode
    RW = 0;
    EN = 1;
    delay();
    EN = 0;
}

void lcd_init() {
    cmd(0x38);  // 8-bit, 2 line
    cmd(0x0C);  // display ON
    cmd(0x06);  // entry mode
    cmd(0x01);  // clear screen
}
