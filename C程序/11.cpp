#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("请输入两个分数，格式为分子/分母：");
	scanf("%d/%d",&a,&b);
	scanf("%d/%d",&c,&d);
	if(b==d)
	{
		if(a<c)
			printf("%d/%d < %d/%d",a,b,c,d);
		else if(a==c)
			printf("%d/%d = %d/%d",a,b,c,d);
		else
			printf("%d/%d > %d/%d",a,b,c,d);
	}
	else
	{
		if(a*d<c*b)
			printf("%d/%d < %d/%d",a,b,c,d);
		else if(a*d==c*b)
			printf("%d/%d = %d/%d",a,b,c,d);
		else
			printf("%d/%d > %d/%d",a,b,c,d);	
	}
	return 0;
}
