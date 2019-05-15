#include <stdio.h>
#include <math.h>
int main()
{
	int m,n,i,sum1,sum2;
	while((scanf("%d %d",&m,&n))!=EOF)
	{
		sum1=0;
		sum2=0;
		for(i=1;i<=m/2;i++)
		{
			if(m%i==0)
			{
				sum1+=i;
			}
		}
		for(i=1;i<=n/2;i++)
		{
			if(n%i==0)
			{
				sum2+=i;
			}
		}
		if(sum1==n && sum2==m)
		printf("yes\n");
		else
		printf("no\n");
	}
	return 0;
}
