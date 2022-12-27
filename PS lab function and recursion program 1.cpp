#include<stdio.h>
int palindrome(int,int,int);
int main()
{
	int n,pali;
	printf("enter a no for palindrome:");
	scanf("%d",&n);
	pali=palindrome(n,0,n);
	if(pali==1)
	{
	 	printf("no is palindrome");
	}
	else
	{
		printf("no is not palindrome");
	}
}
int palindrome(int n,int rev,int m)
{
	if(m==0)
	{
		if(n==rev)
		return (1);
		else
		return 0;
	}
	else
	{
		palindrome(n,rev*10+m%10,m/10);
	}
}
