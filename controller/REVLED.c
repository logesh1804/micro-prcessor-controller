#include <reg52.h>

#define LED P1

void delay() {
    unsigned int i,j;
    for(i=0;i<100;i++)
        for(j=0;j<1000;j++);
}

void main() {
    unsigned char pattern = 0x01;

    while(1) {
        LED = pattern;   

        pattern = pattern  >>1;			

        if(pattern == 0x00) {
            pattern = 0x01;       
        }
    }
}