#include <stdio.h>

int main() {
    // Write C code here
    int n = 10;
    for(int i=31;i>=0;i--)
    {
        printf("%d",((n>>i)&1));
    }
    printf("\n");
    n^=(3<<17);
    for(int i=31;i>=0;i--)
    {
        printf("%d",((n>>i)&1));
    }
    return 0;
}
