#include <stdio.h>
#include <string.h>
#define N 100000
char s[N]="A";
char t[N/2];
int main()
{  
    int n,i,len;
    char ch='A';
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        strcpy(t,s);   
        len=strlen(s);
        s[len]=++ch;   
        s[len+1]=0;
        strcat(s,t);
    }
    printf("%s",s); 
    return 0;
}
