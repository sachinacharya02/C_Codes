#include <stdio.h>
int n = 5,ones;
int main()
{
  for(int i = 0; i<(sizeof(int)*8);i++)
     if(n&(1<<i))
       ones++;
    printf("%d", ones);
   
}
