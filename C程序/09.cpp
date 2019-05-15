#include<stdio.h>
int main()
{
	int i,n;
	int a,b,c,d;
	int e,f;
	int count;
	printf("输入一个1-9的整数: ");
	scanf("%d",&n);
	for(i=1000;i<=9999;i++)
	{
		a=i/1000;
		b=i/100%10;
		c=i/10%10;
		d=i%10;
		e=a*10+c;
		f=d*10+b;
		if(e>f && e%2==0 && e%n==0 && f%2==1 && a!=0 && d!=0)
			count++;
	}
	printf("%d",count);
	return 0;
}
