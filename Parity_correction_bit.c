#include<stdio.h>
#define check(num,pos) (num&(1<<pos))
void even_parity(int ,int);
void odd_parity(int,int);
int count(int num)
{
int i,count=0,choice;
for(i=0;i<sizeof(int);i++)
{
if(check(num,i))
{
count++;
}
}
return count;
}

void main()
{
int num,i,choice;
printf("Enter a number:");
scanf("%d",&num);
for(i=(sizeof(int)*8)-1;i>=0;i--)
{
    printf("%d",1&(num>>i));
}
printf("\n");
int onecount=count(num);
option:
printf("Enter option for parity:\n");
printf("1. Even parity 2. Odd parity\n");
scanf("%d",&choice);
switch (choice)
{
case 1:
    even_parity(num,onecount);
    break;
case 2:
    odd_parity(num,onecount);
    break;
default:
    printf("Enter the correct option");
    goto option;
    break;
}
}

void even_parity(int num,int onecount)
{
if(onecount%2)
{
    num=(num<<1)|1;
}
else
{
    num=(num<<1)|0;
}
printf("Parity added bit is:\t");
for(int i=(sizeof(int)*8)-1;i>=0;i--)
{
    printf("%d",1&(num>>i));
}
printf("\n\n");
}

void odd_parity(int num,int onecount)
{
    if(onecount%2)
{
    num=(num<<1)|0;
}
else
{
    num=(num<<1)|1;
}
printf("Parity added bit is:\t");
for(int i=(sizeof(int)*8)-1;i>=0;i--)
{
    printf("%d",1&(num>>i));
}
printf("\n\n");
}
