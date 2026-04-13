#include<reg52.h>
#define L P1
void main()
{
	void delay(){
		int i;
		for( i=0;i<10000;1++)
	}
	while(1){
		
		L=0xAA;
		delay();
		L=0x55;
		delay();
	}}
	
	