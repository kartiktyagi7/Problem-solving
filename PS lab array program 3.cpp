#include<stdio.h>
int main()
{
	int a[100],n,i,j,half=0,sum1=0,sum2=0,mul=0;
	printf("enter size of array");
	scanf("%d",&n);
	printf("enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	half=n/2;
	for(i=0;i<half;i++)
	{
		sum1=sum1+a[i];
	}
	for(j=half;j<n;j++)
	{
		sum2=sum2+a[j];
	}
	mul=sum1*sum2;
	printf("%d",mul);
	return 0;
}
