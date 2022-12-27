#include <stdio.h>
#include <math.h>
int main()
{
	float x,sum=1,i,n,fact=1;
	scanf("%f%f",&n,&x);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		sum=sum+(pow(1,i)*pow(x,i))/fact;
	}
	printf("%f",sum);
	return 0;
}
