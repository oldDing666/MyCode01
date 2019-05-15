/*
求3*3矩阵的正对角线的元素和 
*/
#include<stdio.h>
int main()
{
	int a[3][3];
	int i,j;
	printf("请输入九个整数：");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("对角线的正对角线元素和是：%d",a[0][0]+a[1][1]+a[2][2]);
	return 0;
}
