//find the largest number among the three numbers entered by the user.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three no");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		printf("a is bigger");
		else
		printf("c is bigger");
	}
	else
	{
		if(b>c)
		printf("b is bigger");
		else
		printf("c is bigger");
	}
	return(0);
}