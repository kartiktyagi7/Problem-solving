#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=i;j<=2*i-1;j++)
		{
			if(i==j)
			{
			printf("%d",j);	
			}
			else
			{
				printf(" %d",j);
			}
			
			
		}
		printf("\n");
	}
	return 0;
}
