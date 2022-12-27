#include <stdio.h>
#include <math.h>
int main()
{
	float i,n,x,s=1,p=1,f=1;
	scanf("%f%f",&n,&x);
	for(i=1;i<=n;i++)
	{
		p=p*x;
		f=f*i;
		s=s+p/f;
	}
	printf("%f",s);
	return 0;
}
