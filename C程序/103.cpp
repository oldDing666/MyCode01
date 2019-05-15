#include<stdio.h>
int main()
{
    int i,j,a[10];
    int temp;
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    for(i=0;i<9;i++)
    	for(j=0;j<9-i;j++)
    	{
    		if(a[j]>a[j+1])
    		{
    			temp=a[j];
    			a[j]=a[j+1];
    			a[j+1]=temp;
			}
		}
	for(i=0;i<10;i++)
    printf("%d\n",a[i]);
    return 0;
}
