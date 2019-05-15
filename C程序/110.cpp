#include<stdio.h>
#include<math.h>
double fact(int n)
{
	if(n==1 || n==0)
	return 1;
	else
	return n*fact(n-1);
}

double mypow(double x,int n)
{
	return pow(x,n);
}

int main()
{
	int n,i;
	double x;
	double sum=0,p,k;
	double s[100];
	scanf("%lf %d",&x,&n);

	for(i=1;i<=n;i++)
	{
		p=mypow(x,i);
		k=fact(i);
		sum+=pow(-1,i+1)*p/k;
	}
	printf("%.4lf",sum);
	return 0;
}
