#include<stdio.h>
int main()
{
	int a[10];
	int i;
	printf("输入10个加工零件数量: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);		
	}
	for(i=0;i<10;i++)
	{
		if(a[i]<100)
			printf("10  ");
		else if(a[i]>=100 && a[i]<110)
			printf("30  ");
		else if(a[i]>=110 && a[i]<120)
			printf("50  ");
		else if(a[i]>=120 && a[i]<130)
			printf("70  ");
		else
			printf("80  ");
	}
	return 0;
}
