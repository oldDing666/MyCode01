#include<stdio.h>
int func(int m)
{
	int i,x=1;
	for(i=1;i<=m;i++)
	x*=i;
	return x;
}
int main()
{
	int n,i,s=0;
	printf("������һ������: ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		s+=func(i);
	}
	printf("s=%d",s);

	return 0;
}
