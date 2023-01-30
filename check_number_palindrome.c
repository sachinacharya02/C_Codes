#include <stdio.h>
int main()
{
	int n ,temp;
	int r=0,s=0;
	printf("Enter the number");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r =n%10;
		s=s*10+r;
		n=n/10;
	}
	if(temp == s)
	{
		printf("The number is palindrome");
	}
	else
	{
		printf(" The number is not a palindrome");

	}

}
