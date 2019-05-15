/*
水仙花数 
*/
#include<stdio.h>
int main()
{
	int n;
	int a,b,c,i;
	printf("输入一个三位的整数：");
	scanf("%d",&n);
	for(i=100;i<=n;i++)
	{
		a=i/100;
		b=i/10%10;
		c=i%10;
		if(a*a*a+b*b*b+c*c*c==i)
		printf("%d\n",i);
	}
	return 0;
}
