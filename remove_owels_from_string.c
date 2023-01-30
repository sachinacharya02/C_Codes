#include <stdio.h>
#include <string.h>
char a[]= "MIRAFRA";
char b[30];
int j=0;
int main()
{
   
  int len = strlen(a);
  for(int i=0;i<len;i++){
      
       if( a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'
          ||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U') {
              i=i+1;
          }
         
         b[j]=a[i];
          j++;   
          
  }
    printf("%s\n",a);
    printf("%s\n",b);
    printf("%d\n",len);
    return 0;
}
