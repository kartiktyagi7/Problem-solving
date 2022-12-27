#include <stdio.h>
int main()
{
	int a[100],i,num,c=0,n;
	printf("Enter size of array");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter no you want to search");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(num==a[i])
		{
			printf("%d is found at a[%d]\n",num,i);
			c++;
		}
	}
	if(c==0)
	printf("Number is not present in array");
	printf("Submitted by Himanshu Garg  (2100321530079)");
}
