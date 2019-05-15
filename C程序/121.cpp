#include <stdio.h>
#include <math.h>
int f(int n)
{
	int a[10],i=0,k,m,sum=0;
	m=n;
	while(n%10==0)
	{
		n=n/10;
	}
	while(n/10!=0)
	{
		a[i]=n%10;
		i++;
		n=n/10;
	}
	a[i]=n;
	
	for(k=0;k<=i;k++)
	{
		sum+=a[k]*(pow(10,i-k));
	}
	return sum;
}

int main()
{
	int m,n;
	int a,b;
	int sum;
	while((scanf("%d %d",&m,&n))!=EOF)
	{
		a=f(m);
		b=f(n);
		sum=a+b;
		printf("%d\n",f(sum));
	}
	return 0;
}
