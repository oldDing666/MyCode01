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
	printf("������뾶��");
	scanf("%lf",&r);
	printf("�ܳ��ǣ�%.2lf\n",l(r));
	printf("����ǣ�%.2lf",s(r));
	return 0;
}
