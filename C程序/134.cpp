#include <math.h>
#include <stdio.h>
/**
输入三个点的坐标，判断是否是直角三角形，不需要判断三个点是否在同一直线上 
*/
int main( )
{
	int i,j;
	int a[100][6];
	int m;
	double max,min;
	double x,y,z;
	scanf("%d",&m);
	for(i=0;i<m;i++)
		for(j=0;j<6;j++)
		scanf("%d",&a[i][j]);
	for(i=0;i<m;i++)
	{
		// ai0,ai1	ai2,ai3	ai4,ai5
		x=sqrt(pow(a[i][2]-a[i][0],2)+pow(a[i][3]-a[i][1],2));
		y=sqrt(pow(a[i][4]-a[i][0],2)+pow(a[i][5]-a[i][1],2));
		z=sqrt(pow(a[i][4]-a[i][2],2)+pow(a[i][5]-a[i][3],2));
		max=x>y?x:y;
		max=max>z?max:z;
		min=x<y?x:y;
		min=min<z?min:z;
		if(pow(min,2)+pow(x+y+z-max-min,2)==pow(max,2))
		printf("Yes\n");
		else
		printf("No\n");
		printf("%.2lf\n",x+y+z);
	}
	return 0;
}
