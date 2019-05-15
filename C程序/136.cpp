#include <math.h>
#include <stdio.h>
/**
输入两个点的坐标，求距离 
*/
int main( )
{
	int i,j;
	int a[100][6];
	int m;
	double length;
	scanf("%d",&m);
	for(i=0;i<m;i++)
		for(j=0;j<4;j++)
		scanf("%d",&a[i][j]);
	
	for(i=0;i<m;i++)
	{
		// ai0,ai1	ai2,ai3
		length=sqrt(pow(a[i][2]-a[i][0],2)+pow(a[i][3]-a[i][1],2));
		printf("%.2lf\n",length);
	}
	return 0;
}
