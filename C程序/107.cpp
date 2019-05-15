#include<stdio.h>
#include<string.h>
int main()
{
    int m,n,i,j,k;
    int a[5];
    int flag=0;
    for(i=1;i<=256;i++)
    {
    	n=i*i;
    	for(j=0;;)
    	{
    		while(n/10!=0)
    		{
    			a[j]=n%10;
    			n=n/10;
    			j++;
			}
			if(n/10==0)
			{
				a[j]=n;
				break;
			}
		}

		for(k=0;k<=j/2;k++)
		{
			if(a[k]!=a[j-k])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		printf("%d\n",i);
		flag=0;
	}
	return 0;
}
