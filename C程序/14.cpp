#include<stdio.h>
int main()
{
	int n,m;
	printf("����һ����λ�����µ�������");
	scanf("%d",&n);
	if(n>=0 && n<=9)
		m=1;
	else if(n>=10 && n<=99)
		m=2;
	else if(n>=100 && n<=999)
		m=3;
	else if(n>=1000 && n<=9999)
		m=4;
	printf("����%d��%dλ",n,m);
	return 0;
}
