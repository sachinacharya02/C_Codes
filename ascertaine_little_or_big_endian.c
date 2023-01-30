#include <stdio.h>
union ltoh{
    int a;
    char b[4];
};
int main() {
    // Write C code here
    union ltoh t1;
    t1.a=0x11223344;
    if(t1.b[0]==0x44)
    {
	    printf("little endian");
    }
    else
    {
	    printf("big endian");
    }
    return 0;
}

