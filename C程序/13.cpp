#include<stdio.h>
#define PI 3.14
double l(double R)
{
	return 2*PI*R;
}
double s(double R)
{
	return PI*R*R;
}

int main()
{
	double r;
	printf("请输入半径：");
	scanf("%lf",&r);
	printf("周长是：%.2lf\n",l(r));
	printf("面积是：%.2lf",s(r));
	return 0;
}
