#include<stdio.h>
#include<string.h>
int main()
{
	int n,m,i,j,count=0,flag;
	int a[20];
	while((scanf("%d",&n))!=EOF)
	{
		m=n;
		if(n==0 || count==10)
		return 0;
		else
		{
			flag=0;
			while(n%10==0)
			{
				if(n%10==0)
				flag++;
				n=n/10;
			}
			n=m;
			if(n/10==0)
			{
				printf("%d %d\n",n,n);
			}
			else
			{
				i=0;
				while(n/10!=0)
				{
					a[i]=n%10;
					n=n/10;
					i++;
				}
				a[i]=n;
				
				printf("%d ",m);
				for(j=flag;j<=i;j++)
				{
						if(j!=i)
						printf("%d",a[j]);
						else
						{
							printf("%d\n",a[j]);
							break;
						}
				}
			}
		}
		count++;	
	}
	return 0;
}
