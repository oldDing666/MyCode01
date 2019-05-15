#include <stdio.h>
#include <math.h>
int f(int n)
{
	int h,m,s;
	h=n/3600;
	m=(n-h*3600)/60;
	s=n-h*3600-m*60;
	if(h<10)
	printf("0%d:",h);
	else
	printf("%d:",h);
	if(m<10)
	printf("0%d:",m);
	else
	printf("%d:",m);
	if(s<10)
	printf("0%d\n",s);
	else
	printf("%d\n",s);
	return 0;
}
int main()
{
	int t,a[100000];
	int i,j;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	scanf("%d",&a[i]);
	for(i=0;i<t;i++)
	f(a[i]);
	return 0;
}
