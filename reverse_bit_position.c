#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	printf("befor shift");
	for(int i=0;i<31;i++)
	{
		printf("%d",n>>i&1);
	}
	for(int i=0,j=31;i<j;i++,j--)
	{
		int c =n>>i&1;
		int d =n>>j&1;
		if(c!=d)
		{
			int temp;
			temp=c;
			c=d;
			d=temp;
		}
	}
	printf("\n");
	printf("after shift");
	for(int i=0;i<31;i++)
	{
		printf("%d",n>>i&1);
	}
}
