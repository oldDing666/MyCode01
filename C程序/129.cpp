#include <stdio.h>
#include <string.h>

/**
��20��
�� long long ��
���ʱ %lld 
*/
long long jiecheng(int n)
{
	if(n==1)
	return 1;
	else
	return n*jiecheng(n-1);
}


int main()
{
	int i,n;
	long long sum=0;	
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	sum+=jiecheng(i);
	printf("%lld",sum);
	return 0;
}


