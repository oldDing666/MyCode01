#include <math.h>
#include <stdio.h>
/**
输入多组年月日，求这个日期是这一年的第多少天 
*/
int main( )
{
	int i,j;
	int a[100][6];
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int m;
	int sum;
	scanf("%d",&m);
	for(i=0;i<m;i++)
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	
	for(i=0;i<m;i++)
	{
		sum=0;
		for(j=1;j<a[i][1];j++)
		sum+=month[j-1];
		sum+=a[i][2];
		//如果这一年是闰年，且月数大于2，则sum加一 
		if(((a[i][0]%4==0 && a[i][0]%100 !=0) || (a[i][0]%400==0)) && a[i][1]>2)
		sum+=1;
		printf("%d\n",sum);
	}
	return 0;
}
