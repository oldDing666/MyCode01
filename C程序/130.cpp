#include <stdio.h>
#include <math.h>
int isPrime(int n)
{
	int i,count=0;
	if(n==1)
	return 0;
	else if (n==2)
	return 1;
	else
	{
		for(i=2;i<=(int)sqrt(n);i++)
		{
			if(n%i==0)
			count++;
		}
		if(count==0)
		return 1;
		else
		return 0;
	}
}


int main()
{
	int i,n,count=0;
	int a[1000];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(isPrime(i)==1)
		{
			a[count]=i;
			count++;
		}
	}
	for(i=0;i<count;i++)
	printf("%d ",a[i]);
	return 0;
}


