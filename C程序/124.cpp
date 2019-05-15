#include <stdio.h>
#include <string.h>
int main()
{
	int n,i,j;
	int a[100];
	int count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			count++;
		}
	printf("%d",count);
	return 0;
}
