#include<stdio.h>
#include<string.h>
long fab(int x)
{
	if(x==0 || x==1)
	return 1;
	else 
	return x*fab(x-1);
}

int main()
{
    int i,n;
    long sum=0;
	scanf("%d",&n);
    for(int i=1;i<=n;i++)
    sum+=(long)fab(i);
    printf("%ld",sum);
    return 0;
}
