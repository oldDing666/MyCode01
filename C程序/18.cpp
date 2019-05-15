#include<stdio.h>
int main()
{
	int n1,n2;
	int i,j,k;
	int count=0;
	printf("马匹数：");
	scanf("%d",&n1);
	printf("担货数: ");
	scanf("%d",&n2);
	for(i=1;i<=n1-3;i++)
		for(j=1;j<n1-3;j++)
			for(k=2;k<n1-2;k+=2)
			{
				if(i+j+k==n1 && 3*i+2*j+k/2==n2)
				{
					count++;
					printf("%d: 大马%d只，中马%d只，小马%d只\n",count,i,j,k);
				}
				
			}
	printf("%d",count);
	return 0;
}
