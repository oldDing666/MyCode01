#include<stdio.h>
int main()
{
	long n;
	int i,j;
	int a[100];
	int sum;
	while((scanf("%ld",&n))!=EOF)
	{
		for(i=0;n/10!=0;i++)
		{
			a[i]=n%10;
			n=n/10;
		}
		a[i]=n;
		sum=0;
		for(j=0;j<=i;j++)
		{
			sum+=a[j];
		}
		printf("%d\n",sum);
	}
	return 0;
}
