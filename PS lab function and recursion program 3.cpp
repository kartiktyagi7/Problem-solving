#include <stdio.h>
int factorial(int,int);
int main()
{
	int n,fact, x;
	printf("enter no for factorial:");
	scanf("%d",&n);
	fact=factorial(n,n-1);
	printf("the factorial of a given no is:%d", fact);
}
int factorial(int n,int x)
{
	if(x==0)
	return (n);
	else
	factorial(n*x,x-1);
}
