#include<stdio.h>

int highnumber()
{
	printf("������10��ѧ���ĳɼ�:\n");
	int i,j,count=0;
	double sum=0;
	double a[2][5];
	for(i=0;i<2;i++)
		for(j=0;j<5;j++)
		{
			scanf("%lf",&a[i][j]);
			sum+=a[i][j];
		}
	sum=sum/10;
	for(i=0;i<2;i++)
		for(j=0;j<5;j++)
		{
			if(a[i][j]>sum)
			count++;
			//printf("%.1lf  ",a[i]);
		}
	printf("ƽ���ɼ�����Ϊ��%lf\n",sum);
	return count;
}

int main()
{
	printf("����ƽ���ɼ�������Ϊ��%d",highnumber());
	return 0;
}

