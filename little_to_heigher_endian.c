#include <stdio.h>
union ltoh{
    int a;
    char b[4];
};
int main() {
    // Write C code here
    union ltoh t1;
    t1.a=0x11223344;
    char temp = t1.b[3];
    t1.b[3]=t1.b[0];
    t1.b[0]=temp;
    temp = t1.b[1];
    t1.b[1]=t1.b[2];
    t1.b[2]=temp;
    printf("%x",t1.a);
    return 0;
}
