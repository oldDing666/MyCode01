#include<stdio.h>
int main()
{
	float a[10];
	//涉及到小数，推荐用double 
	int i;
	printf("请输入10个分数：");
	for(i=0;i<10;i++)
	{
		scanf("%f",&a[i]);
	}
	float max=a[0];
	for(i=1;i<10;i++)
	{
		if(max<a[i])
		max=a[i];
	}
	float min=a[0];
	for(i=1;i<10;i++)
	{
		if(min>a[i])
		min=a[i];
	}
	float sum=0.0;
	for(i=0;i<10;i++)
	{
		sum+=a[i];
	}
	sum=(sum-max-min)/8.0;
	printf("%.1f",sum);
	return 0;

}
