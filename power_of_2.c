# include <stdio.h>
int main()
{
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	if((n&(n-1))==0)
	{
		printf("It is a power of 2");
	}
	else
	{
		printf("It is not a power of 2");
	}
	return 0;
}
