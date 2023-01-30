/*When a pointer is pointing at the memory address of a variable but after some
 *  time that variable is deleted from that memory location while the pointer 
 *  is still pointing to it, then such a pointer is known as a dangling pointer,
 *  to avoid this problem just make reinitiallized the pointer will NULL.*/                       
#include <stdio.h>
int main()
{
    int *ptr = (int *)malloc(sizeof(int));
    free(ptr); 
    ptr = NULL;
}
