#include<stdio.h>
int main()
{
	int n,m,count=0;
	int i;
	printf("请输入一个整数n(n<=5)：");
	scanf("%d",&n);
	printf("请输入一个整数m(1<=m<=9)：");
	scanf("%d",&m);
	if(n==1)
	{
		if(6%m==0)
		count++;
	}
	else if(n==2)
	{
		for(i=16;i<=96;i+=10)
		{
			if(i%m==0)
			count++;
		}
	}else if(n==3)
	{
		for(i=106;i<=996;i+=10)
		{
			if(i%m==0)
			count++;
		}
	}
	else if(n==4)
	{
		for(i=1006;i<=9996;i+=10)
		{
			if(i%m==0)
			count++;
		}
	}
	else if(n==5)
	{
		for(i=16;i<=96;i++)
		{
			if(i%m==0)
			count++;
		}
	}
	else
		printf("*********");
	printf("%d",count);
	return 0;
}
