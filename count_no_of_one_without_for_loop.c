#include <stdio.h>
int n = 5,i;
int main()
{
   while(n!=0){
     int ones =n&1;
     if(ones)
       i++;
       n=n>>1;
   }
    printf("%d", i);
   
}     
