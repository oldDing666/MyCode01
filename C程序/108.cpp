#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j;
	char a[100][150];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%s",a[i]);
	
	for(i=0;i<n;i++)
	{
		for(j=0;a[i][j]!=0;j++)
		{
			if(a[i][j]>='0' && a[i][j]<='9')
			printf("%d ",j+1);
		}
		printf("\n");
	}
		
	return 0;
}
