#include<stdio.h>
double leicheng(int m)
{
	int i;
	double sum=1;
	for(i=1;i<=m;i++)
	{
		sum*=1.0/i;
	}
	return sum;
}
int main()
{
	int n;
	printf("����һ��������: ");
	scanf("%d",&n);
	printf("%.12lf",leicheng(n));
	return 0;
}
