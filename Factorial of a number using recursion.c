
#include <stdio.h>
int factorial (int number)
{
    static int result=1;
    if(number!=0)
    {
    result*=number;
    factorial(number-1);
    }
    return result;
}
int main() {
   int number,result;
   printf("Enter a number:");
   scanf("%d",&number);
   result=factorial(number);
   printf("Factorial of %d is %d",number,result);
    return 0;
}
