#include <stdlib.h>
#include <stdio.h>
int main( )
{
	int i,j,temp;
	int a[100];
	int n;
	scanf("%d",&n);
	for(i = 0; i < n;i++)
	{
		a[i]=rand()%100+1;
	}
	for(i = 0; i < n-1;i++)
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	for(i = 0; i < n;i++)
	printf("%d\n",a[i]);
	return 0;
}
