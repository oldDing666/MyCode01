#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j;
    while((scanf("%d",&n))!=EOF)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(i==1||i==n)
				printf("* ");
				else
				{
					if(j==1||j==n)
					printf("* ");
					else
					printf("  ");
				}
				if(j==n)
				printf("\n");
			}
		}
	}
	return 0;
}
