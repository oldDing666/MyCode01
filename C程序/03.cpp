#include<stdio.h>
int main()
{
	int age[20];
	int d[11]={0};
	int i;	
	int temp;
	printf("ÇëÊäÈëÄêÁä: ");
	for(i=0;i<20;i++)
	{
		scanf("%d",&temp);
		age[i]=temp;
		if(age[i]>=0 && age[i]<=9)
			d[0]++;
		else if(age[i]>=10 && age[i]<=19)
			d[1]++;
		else if(age[i]>=20 && age[i]<=29)
			d[2]++;
		else if(age[i]>=30 && age[i]<=39)
			d[3]++;
		else if(age[i]>=40 && age[i]<=49)
			d[4]++;
		else if(age[i]>=50 && age[i]<=59)
			d[5]++;
		else if(age[i]>=60 && age[i]<=69)
			d[6]++;
		else if(age[i]>=70 && age[i]<=79)
			d[7]++;
		else if(age[i]>=80 && age[i]<=89)
			d[8]++;
		else if(age[i]>=90 && age[i]<=99)
			d[9]++;
		else
			d[10]++;
	}

	for(i=0;i<11;i++)
	{
		printf("%d  ",d[i]);
	}
	return 0;
}
