#include <stdio.h>
#include <string.h>
int main()
{
	int i,j,k,m=3;
	int a[4];
	int b[3];
	for(i=0;i<4;i++)
		scanf("%d",&a[i]);
	for(m=3;m>=0;m--)
	{
		//拆分成4个不同的数组{1,2,3}、{1,2,4}、{1,3,4}、{2,3,4} 
		j=0;
		for(i=0;i<4;i++)
		{
			
			if(i==m)
			continue;
			b[j]=a[i];
			j++;
		}
		//对拆分后的每个数组进行进行遍历 
		for(i=0;i<3;i++)
			for(j=0;j<3;j++)
				for(k=0;k<3;k++)
				{
					if(i!=j && i!=k && j!=k)
					printf("%d %d %d\n",b[i],b[j],b[k]);
				}
		
	}
	return 0;
}
