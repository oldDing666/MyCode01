#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("������������������ʽΪ����/��ĸ��");
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
