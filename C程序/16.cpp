#include<stdio.h>
double func(double m)
{
	double i,x=1;
	for(i=1;i<=m;i++)
	x*=i;
	return x;
}
double func2(double g)
{
	double i;
	for(i=1;;i++)
	{
		if(1/func(i)<g)
		return i;
	}
}
int main()
{
	int i;
	double e,f,sum=1;
	printf("ÇëÊäÈë¾«¶Èf: ");
	scanf("%lf",&f);
	//printf("%lf",func2(f));
	for(i=1;i<=func2(f);i++)
	{
		sum+=1/func(i);
	}
	printf("e=%lf",sum);
	return 0;
}
