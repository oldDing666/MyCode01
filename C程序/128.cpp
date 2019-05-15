#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char str[1000];
	scanf("%s",str);
	for(i=0;i<strlen(str)-1;i+=2)
	{
		if((int)str[i+2]-(int)str[i] != 1)
		{
			printf("%d",((int)str[i]));
			break;
		}
	}
	return 0;
}
