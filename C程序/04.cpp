#include<stdio.h>
int main()
{
	int a,b,c;
	int max,min;
	int i,j;
	printf("��������������: ");
	scanf("%d %d %d",&a,&b,&c);
	max=a>b?a:b>c?b:c;
	min=a<b?a:b<c?b:c;
	for(i=min;i>=1;i--)
	{
		if(a%i==0 && b%i==0 && c%i==0)
		{
			printf("%d %d %d�����Լ���ǣ�%d",a,b,c,i);			
			break;
		}
	}
	return 0;
}

