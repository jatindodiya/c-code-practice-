#include <REG51F.H>
int count=0;
//bit flag=0; 

void isr_t0() interrupt 1
{
	if(++count>=50)
	{	
	P2=(~P2|P1);
	count=0;
	}

TH0=0xDB;
TL0=0xFF;
}

void main()
{
P1=0xff;
P2=0X00;	 
TMOD=0X01;
TH0=0xDB;
TL0=0xFF;
TR0=1;
EA=1;      
ET0=1;
	
		
	while(1)
	{
		
	}
}
