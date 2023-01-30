#include<stdio.h>
void user_strcpy(char *src,char *dst,int strt_index,int end_index)
{
	for(int i=strt_index;i<=end_index;i++)
	{
		*dst=*(src+i);
		dst++;
	}
	*dst='\0';
}
int main()
{
	char src[100]="Hi K Saikumar, As discussed please find the link below and join prior 5 Min.";
	char dst[100];
	int strt_index=10,end_index=20;
	user_strcpy(src,dst,strt_index,end_index);
	printf("%s",dst);
	return 0;

}
