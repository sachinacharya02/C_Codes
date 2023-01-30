#include<stdio.h>
void check_prime(int num)
{
	int flag = 0;
	if(num==0||num==1)
	{
		flag=1;
	}
	for(int i=2;i<num/2;++i)
	{
		if(num%i == 0)
		{
			flag=1;
			break;
		}
	}

	if(flag == 0)
	{
		printf("It is a prime number");
	}
	else
	{
		printf("It is not a prime number");
	}
}
int main()
{
	int num ;
	printf("Enter the number");
	scanf("%d",&num);
	check_prime(num);
	return 0;
}
