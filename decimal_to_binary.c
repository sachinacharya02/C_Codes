# include <stdio.h>
#define bits 32 //
void decimal_to_binary(int n)
{
	int a[bits],i=0;
	while(n>0)
	{
		a[i]=n%2;
		n=n/2;
		i++;

	}
	for(int j=i-1;j>=n;j--)
	{
		printf("%d",a[j]);
	}
}
int main()
{
	int n;
	printf("Enter the decimal number");
	scanf("%d",&n);
	decimal_to_binary(n);
	return 0;
}
