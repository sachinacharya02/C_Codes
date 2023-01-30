#include<stdio.h>
void atoi(char *);
void main()
{
    char s[16];
    printf("enter the ip address\n");
    scanf("%s",&s);
    printf("%s",s);
    atoi(s);
}
void atoi(char *p)
{
    int a[4]={0};
    int i,j,k=0,n;
    static int count=1;
    for(i=0;p[i]!='\0';i++)
    {
        
        
        if(p[i]=='.')
        {
            if(p[i+1]=='.')
            break;
            a[k++]=n;
            n=0;
            count++;
            continue;
        }
        else
            n=n*10+p[i]-48;
            }
            
            if(p[i]=='.')
            {
                printf("Enterd Wrong Ip address\n");
                return 0;
            }
          
    a[k]=n;
     if(count==4)
    {
        printf("count==%d\n",count);
        int c=0;
        for(i=0;i<4;i++)
        {
            printf("%d\n",a[i]);
            if(a[i]<=255)
            {continue;
            }
            
            else
              c++;
            
        }
              if(c==0)
              {
                  printf("valid address\n");
              }
              else
              printf("invalid address\n");
    }
    }
