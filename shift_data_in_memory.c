#include<stdio.h>
int main()
{
	int *p1 =0x2500;
	int *p2=0x3000;
	for(int i=0;i<1000;i++)
	{
		*p2=*p1;
		p1--;
		p2--;

	}
	return 0;
}
