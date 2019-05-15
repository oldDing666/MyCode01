#include <stdio.h>
#include <math.h>

int g(int n)  //判断是否是质数 
{
	int i,count=0;
	if(n==1)
	return 0;//不是质数 
	else if(n==2)
	return 1;//是质数 
	else
	{
		for(i=2;i<n;i++)
		{
			if(n%i==0)
			count++;
		}
		if(count==0)
		return 1;
		else
		return 0;
	}
	
	
}

void f(int n)
{
	int i,a[100],k=0,t;
    t=n;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            a[k]=i;
            n=n/i;
            i=1;    
			k++;                   
        }  
    }
    printf("%d=",t);
    for(i=0;i<k;i++)
    {
        printf("%d",a[i]);     
        if(i<k-1) 
		printf("*"); 
    }  
    printf("\n");
}

int main()
{
	int a,b,i;
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
		if(g(i)==0) 
        {      
            f(i);
        }
        else
        {
            printf("%d=%d\n",i,i);         
        }
	}
	return 0;
}
