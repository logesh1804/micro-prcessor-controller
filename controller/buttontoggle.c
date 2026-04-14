#include <reg52.h>

sbit L = P1^0;   
sbit C = P3^3;   

void delay() {
    unsigned int i,j;
    for(i=0;i<100;i++)
        for(j=0;j<100;j++);
}

void main() {
    L = 0;   

    while(1) {
        if(C == 0) {         

            delay();         

            if(C == 0) {      
                L = ~L;      

                while(C == 0);   
            }
        }
    }
}