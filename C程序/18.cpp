#include<stdio.h>
int main()
{
	int n1,n2;
	int i,j,k;
	int count=0;
	printf("��ƥ����");
	scanf("%d",&n1);
	printf("������: ");
	scanf("%d",&n2);
	for(i=1;i<=n1-3;i++)
		for(j=1;j<n1-3;j++)
			for(k=2;k<n1-2;k+=2)
			{
				if(i+j+k==n1 && 3*i+2*j+k/2==n2)
				{
					count++;
					printf("%d: ����%dֻ������%dֻ��С��%dֻ\n",count,i,j,k);
				}
				
			}
	printf("%d",count);
	return 0;
}
