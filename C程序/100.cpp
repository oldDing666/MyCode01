#include<stdio.h>
#include<string.h>
int minnum(int a,int b)
{
	int i;
	for(i=b;i>0;i--)
    {
    	if(a%i==0 && b%i==0)
    	{
    		break;
		}
	}
	return i;
}

int maxnum(int a,int b)
{
	int i;
	for(i=a;i<=b*a;i++)
	{
		if(i%a==0 && i%b==0)
		{
			break;
		}
	}
	return i;
}

int main()
{
    int m,n;
    int i,max,min;
    scanf("%d %d",&m,&n);
    max=m>n?m:n;
    min=m<n?m:n;
	printf("%d ",minnum(max,min));
	printf("%d",maxnum(max,min));

    return 0;
 
}
