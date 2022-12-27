#include <stdio.h>
int main()
{
	int i,j,n,l=0,h,a[10][10];
	scanf("%d",&n);
	h=2*n-2;
	while(n>0)
	{
		for(i=l;i<=h;i++)
		{
			for(j=l;j<=h;j++)
			{
				if(i==l||i==h||j==l||j==h)
				{
					a[i][j]=n;
				}
			}
		}
		n--;
		l++;
		h--;
	}
	return 0;
}
