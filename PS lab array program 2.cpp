#include<stdio.h>
int main()
{
	int i,a[10],n,max=0;
	printf("enter no of candles");
	scanf("%d",&n);
	printf("enter the size of candle");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		max=a[i];
	}
	printf("%d",max);
	return 0;
}
