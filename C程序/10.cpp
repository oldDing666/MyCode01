#include<stdio.h>
int main()
{
	double n;
	double m=100;
	int i=0;
	printf("输入一个0~30的实数：");
	scanf("%lf",&n);
	while(m<200)
	{
		m=m*(1+n/100.0);
		i++;
		printf("%lf\n",m);
	}
	printf("%d",i);
	return 0;
}
