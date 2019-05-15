#include <stdio.h>
#include <string.h>
int main()
{
	int n,i,j;
	while((scanf("%d",&n))!=EOF)
	{
		for(i=1;i<=n+1;i++)
			for(j=1;j<=n+2;j++)
			{
				if(i!=n+1)
				{
					if(j==1)
					printf("*");
					else if(j==n+2)
					printf("*\n");
					else
					printf(" ");
				}
				else
				{
					if(j==n+2)
					printf("*\n");
					else
					printf("*");
				}
			}
		printf("\n");
	}
    return 0;
}
