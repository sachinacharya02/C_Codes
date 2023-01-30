#include<stdio.h>
#include<string.h>
int main()
{
	char p[20];
	printf("Enter the string");
	scanf("%s",p);
	int l=0,h=strlen(p)-1;
	while(l<h)
	{
		if(p[l]!=p[h])
		{
			printf("string is not a palindrome");
			return 0;
		}
		l++;
		h--;
	}
	printf("string is palindrome");
	return 0;
}
