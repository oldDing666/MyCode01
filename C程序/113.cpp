#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i,sum=0;
	scanf("%s",a);
	for(i=0;i<strlen(a);i++)
	sum+=a[i]-'0';//注意这一行，将字符转成数字 
	printf("%d",sum);
	return 0;
}
