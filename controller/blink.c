#include<reg52.h>
sbit LED =P1^0;
void delay(){
	int i,j;
	for(i=0;i<10000;i++);
}
void main(){
	while(1){
		LED=1;
			delay();
		LED=0;
		delay();
	}}