/*
��3*3��������Խ��ߵ�Ԫ�غ� 
*/
#include<stdio.h>
int main()
{
	int a[3][3];
	int i,j;
	printf("������Ÿ�������");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("�Խ��ߵ����Խ���Ԫ�غ��ǣ�%d",a[0][0]+a[1][1]+a[2][2]);
	return 0;
}
