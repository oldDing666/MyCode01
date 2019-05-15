#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,n,m;
    int sum=0,a[100];
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		for(i=1,m=0;i<=j/2;i++)
		{
			if(j%i==0)
			{
				sum+=i;
				a[m]=i;
				m++;
			}
		}
		if(sum==j)
		{
			for(i=0;i<m;i++)
			{
				if(i==0)
				printf("%d its factors are %d ",j,a[i]);
				else if(i==m-1)
				printf("%d\n",a[i]);
				else
				printf("%d ",a[i]);
			}
		}
		sum=0;
	}
    return 0;
}
