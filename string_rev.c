#include <stdio.h>
#include <string.h>
int main() {
    // Write C code here
    char str[]="sachinkasjldja",temp;
    int l=0,h=strlen(str)-1;
    while(l<h)
    {
        temp=str[l];
        str[l]=str[h];
        str[h]=temp;
        l++;
        h--;
    }
    
    
    printf("%s",str);

    return 0;
}
