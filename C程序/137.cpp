#include <math.h>
#include <stdio.h>
/**

*/
int main( )
{
	int i,j;
	int a[100][100];
	int m,n,x;
	double sum;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		sum=0;
		scanf("%d",&n);
		for(j=0;j<=n;j++)
		scanf("%d",&a[i][j]);
		scanf("%d",&x);
		for(j=0;j<=n;j++)
		{
			sum+=a[i][j]*pow(x,j);
		}
		printf("%.0lf\n",sum);
	}
	
	return 0;
}
