#include <math.h>
#include <stdio.h>
/**
����С��
ÿ����غ󣬵����ϴθ߶ȵ�һ�룻
�������ѧ�߼��ܼ� 
*/
int main( )
{
	int i,j;
	int a[100][6];
	int m;
	double sum;
	scanf("%d",&m);
	for(i=0;i<m;i++)
		for(j=0;j<2;j++)
		scanf("%d",&a[i][j]);
	for(i=0;i<m;i++)
	{
		sum=a[i][0];
		for(j=2;j<=a[i][1];j++)
		{
			sum+=2*a[i][0]*pow(2,-(j-1));
		}
		printf("%.2lf\n",sum);
	} 
	return 0;
}
