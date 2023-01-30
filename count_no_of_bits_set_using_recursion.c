#include <stdio.h>
int bitCount(unsigned int n, int count);
int main() {
   unsigned int x=4;
   int counting = 0;
   printf ("Result of bits: %d \n", bitCount(x,counting));


}
int bitCount(unsigned int n, int count) {       
    if (n==0) return count;
    if (n%2==1) 
    bitCount(n/2,count+1);
    else 
    bitCount(n/2,count);
}
