#include <stdio.h>

/**
����������������� 
*/
int main()
{

	int i,n;
	double high=100.0,count=0.0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i==1)
			count=high;
		else
			count+=high*2;
		high/=2.0;
	}
	printf("%.4lf",count);
	return 0;
}
