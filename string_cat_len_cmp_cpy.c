#include <stdio.h>

int d_strlen(char *p);
int strcmp1(char *s1,char *s2);
void strcpy1(char *s5);
char* strcat1(char *dest, char *source);

char s[]="sachin";
char s3[]="sachin";
char s4[30] = "Mirafra";
int main()
{ 
  /**********finding lenght of string function called**********/
  int len = d_strlen(s);
  printf("%d\n",len);
  
  /**********my string campare function called**********/
  int len1 = strcmp1(s,s3);
  if(len1==1)
  printf("Both String are same\n");
  else 
  printf("Both String are not same\n");
  
  /**********my string concatenates function called**********/
  printf("%s\n",s4);
  strcat1(s4,s3);
  printf("%s\n",s4);
}
 /**********finding lenght of string function defination**********/
int d_strlen(char *p){
    int i=0;
    while(*p!='\0'){
    p++;
    i++;
    }
    return i;
}
/**********my string campare function defination**********/
int strcmp1(char *s1,char *s2){
    int i =0,flag=0;
     while(s1[i]!='\0'){
     if(s1[i]!=s2[i]){
      flag=0;
      break;
     }
      else 
      flag=1;
      i++;
     }
     return flag;
}
 /**********my string concatenates function defination**********/
char* strcat1(char *dest, char *source){
     int i=0;
    int l = d_strlen(dest);
    int l1 =d_strlen(source);
    for( i=0;i<l1;i++){
        dest[l+i]=source[i];
    }
    dest[l+i]='\0';
   
    printf("%s\n",dest);
     return dest;
    
}

