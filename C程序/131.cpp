#include <stdio.h>
#include <math.h>

/**
�������������һ�����м�λ������12345��5λ�� 
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
�������������n^m,����n,m��Ϊ������ 
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
		����˼·���������ifʽ����
		��������ƽ����ȥ���������õ���ֵ�ܹ�����10����������λ���η���
		���磺9376^2=87909376 
		9376��4λ��
		87909376-9376=87900000
		�� 87900000 % 10^4 ==0 
		*/
		if( (mypow(i,2)-i) % mypow(10,n) == 0)
		{
			//������������ֵ���������У������ʽ����� 
			a[count]=i;
			count++;
		}
	}
	for(i=0;i<count;i++)
	{
		if(i==count-1)
		printf("%d",a[i]);
		else
		printf("%d  ",a[i]);	//��ӣ�����Ҫ�������ո� 
	}
	
	return 0;
}
