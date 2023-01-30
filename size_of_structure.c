#include<stdio.h>
struct test{
	int a;
	char b[5];
	float c;
};
int main()
{
        struct test *ptr=0;
	ptr++;
	printf("size of structure %p",ptr);
	return 0;
}
