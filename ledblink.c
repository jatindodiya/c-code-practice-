#include <REG51F.H>
int count=0;

void isr_t0() interrupt 1
{
	if(count>50)
	{	
	P2=~P2;
	count=0;
	}
	count++;
}

void main()
{
P2=0x00;
TMOD=0X11;
TH0=0xDB;
TL0=0xFF;
TR0=1;
EA=1;
ET0=1;
		
	while(1);
}

