#include <stdio.h>
#include <math.h>

/**
这个函数用来求一个数有几位，例如12345有5位。 
*/
int sizes(int n)
{
	int count=1;
	while(n/10!=0)
	{
		count++;
		n=n/10;
	}
	return count;
}

/**
这个函数用来求n^m,其中n,m均为整数。 
*/
long long mypow(int n,int m)
{
	int i;
	long long s=1;
	for(i=1;i<=m;i++)
	{
		s=s*n;
	}
	return s;
}

int main()
{

	int i,n;
	int a[50],count=0;
	for(i=0;i<=200000;i++)
	{
		n=sizes(i);
		/**
		核心思路在下面这个if式子里
		自守数的平方减去自守数，得到的值能够整除10的自守数的位数次方。
		例如：9376^2=87909376 
		9376有4位，
		87909376-9376=87900000
		则 87900000 % 10^4 ==0 
		*/
		if( (mypow(i,2)-i) % mypow(10,n) == 0)
		{
			//将符合条件的值存入数组中，方便格式化输出 
			a[count]=i;
			count++;
		}
	}
	for(i=0;i<count;i++)
	{
		if(i==count-1)
		printf("%d",a[i]);
		else
		printf("%d  ",a[i]);	//天坑，这里要求两个空格 
	}
	
	return 0;
}
