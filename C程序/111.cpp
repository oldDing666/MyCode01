#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n;
	int a[100][100],b[100][100];
	int max,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			b[i][j]=a[i][j];
		}
		
	max=a[0][0];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if(max<a[i][j])
			{
				temp=max;
				max=a[i][j];
				a[i][j]=temp;
			}
			
		}
	printf("%d ",max);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if(b[i][j]==max)
			{
				printf("%d %d\n",i+1,j+1);
				break;
			}
		}
	return 0;
}
