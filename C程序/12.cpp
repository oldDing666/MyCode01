#include<stdio.h>

int highnumber()
{
	printf("请输入10个学生的成绩:\n");
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
	printf("平均成绩分数为：%lf\n",sum);
	return count;
}

int main()
{
	printf("高于平均成绩的人数为：%d",highnumber());
	return 0;
}

