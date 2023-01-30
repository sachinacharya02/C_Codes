#include<stdio.h>
unsigned int toggle_bit(int n,int l,int r)
{
	 int num = ((1 << r) - 1) ^ ((1 << (l - 1)) - 1);
	 return (n ^ num);
}
int main()
{
	int n=10,l=2,r=4;
	printf("toggle bit %d",toggle_bit(n,l,r));
	return 0;
}
