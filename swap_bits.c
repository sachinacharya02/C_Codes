#include <stdio.h>
int swapBits(unsigned int n, unsigned int p1, unsigned int p2)
{
    unsigned int bit1 =  (n >> p1) & 1;
    printf("bits = %x\n ", bit1);
    
    unsigned int bit2 =  (n >> p2) & 1;
    printf("bit2 = %x\n ", bit2);
    
    unsigned int x = (bit1 ^ bit2);
    printf("x = %x\n ", x);
    
    x = (x << p1) | (x << p2);
    printf("x = %x\n ", x);
    
    unsigned int result = n ^ x;
}
 
int main()
{
    int res =  swapBits(256, 7, 8);
    printf("Result = %d ", res);
    return 0;
}
