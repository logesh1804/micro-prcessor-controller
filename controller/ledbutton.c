#include<reg52.h>
sbit LED=P1^0;
sbit BUTTON=P3^3;
void main()
{
	while(1){
		if(BUTTON==0)
		{
			LED=0;
		}
		else
			LED=1;
	}
}
		