#include<stdio.h>
#include<string.h>
int main()
{
    int i,a[10],b[10];
    int temp1,temp2;
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    {
    	if(a[i]>=0)
    	b[i]=a[i];
    	else
    	b[i]=0-a[i];
	}

	for(i=0;i<9;i++)
	{
		if(b[i]<=b[i+1])
		{
		temp1=b[i];
		b[i]=b[i+1];
		b[i+1]=temp1;
		}
	}
	for(i=0;i<10;i++)
	{
		if(a[i]==b[9] || (0-a[i])==b[9])
		{
			temp2=a[i];
			a[i]=a[9];
			a[9]=temp2;
			break;
		}
	}
	for(i=0;i<10;i++)
	printf("%d ",a[i]);
    return 0;
}
