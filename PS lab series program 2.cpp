#include <stdio.h>
#include <math.h>
int main()
{
	int i,n,sum=0,fact=1;
	printf("enter no of terms of a series:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		sum=sum+fact/i;
	}
	printf("%d",sum);
	return 0;
}
