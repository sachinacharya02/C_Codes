#include <stdio.h>
void binary_to_decimal(int num)
{
	int n =num;
	int deci = 0;
	int base = 1;
	int temp =n;
	while(temp)
	{
		int last_digit = temp%10;
		temp=temp/10;
		deci +=last_digit*base;
	       base=base*2;

	//printf("%d",deci);
	}
	printf("%d",deci);

}
int main()
{
	int num;
	printf("Enter number in binary format");
	scanf("%d",&num);
	binary_to_decimal(num);
}
