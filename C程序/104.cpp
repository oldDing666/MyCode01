/**
比较三个字符串大小 
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],c[100];
    char x[100];
    scanf("%s %s %s",a,b,c);
     
    if(strcmp(a,b)>0)
    {
        strcpy(x,a);
        strcpy(a,b);
        strcpy(b,x);
    }
    if(strcmp(a,c)>0)
    {
        strcpy(x,a);
        strcpy(a,c);
        strcpy(c,x);
    }
    if(strcmp(b,c)>0)
    {
        strcpy(x,b);
        strcpy(b,c);
        strcpy(c,x);
    }
 
    printf("%s\n%s\n%s\n",a,b,c);
    return 0;
}
