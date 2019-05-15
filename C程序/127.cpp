#include <stdio.h>
int main()
{
	int n,i,j,temp=0;
	int a[3000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		temp+=a[i];
	}
	temp-=n;
	printf("%d",temp);
	return 0;
}
