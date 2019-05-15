#include <stdio.h>
#include <string.h>
int main()
{
	int n,i,j,a[100],max,temp;
	while((scanf("%d",&n))!=EOF)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		max=a[0];
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-i-1;j++)
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		for(i=0;i<n;i++)
		{
			if(i!=n-1)
			printf("%d ",a[i]);
			else
			printf("%d \n",a[i]);
		}
	}
    return 0;
}
