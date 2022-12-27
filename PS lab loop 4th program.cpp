#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=64+i;j>=63+2*i;j++)
		{
			printf("%c",j);
		}
		printf("\n");
	}
	return 0;
}
