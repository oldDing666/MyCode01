#include <stdio.h>
#include <math.h>
int main()
{
	int m,n;
	int i,j;
	scanf("%d %d",&n,&m);
	for(i=1;i<=2*n+1 && n>0;i++)
	{
		if(i%2==1)
		{
			for(j=1;j<=2*m+1 && m>0;j++)
			{
				if(j%2==1)
				printf("+");
				else if(j%2==0)
				printf("-");
				if(j==2*m+1)
				printf("\n");
			}
		}
		else if(i%2==0)
		{
			for(j=1;j<=2*m+1 && m>0;j++)
			{
				if(j%2==1)
				printf("|");
				else if(j%2==0)
				printf(" ");
				if(j==2*m+1)
				printf("\n");
			}
		}
	}
	return 0;
}
