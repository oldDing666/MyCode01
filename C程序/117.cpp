#include <stdio.h>
#include <string.h>
int main()
{
	int n,i,a[100],sum=0;
	while((scanf("%d",&n))!=EOF)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]<0)
			a[i]=0-a[i];
			sum+=a[i];
		}
		printf("%d\n",sum);
		sum=0;
		
	}
    return 0;
}
