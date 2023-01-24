#include <stdio.h>
#include <math.h>

union test
{
	int a;
	float b;
};

int
main(void)
{
	union test t1;
//t1.a=8;
//t1.b=0.0000000000000000000000000000000000000000000140129846432481707092;
//	t1.b=0.0000000000000000000000000000000000000000000140129846432481707092;
	t1.a=0x0000000a;
	//t1.b=0.75;
	printf("t1.a 0x%08x\n",t1.a);
	printf("t1.b \n%.64f\n",t1.b);
	printf("%.64f\n",1/pow(2,146));
	printf("%.64f\n",1/pow(2,148));
	printf("%.64f\n",1/pow(2,146)+1/pow(2,148));
}

