#include <stdio.h>
#include <math.h>
float fact(float a){
	int f=1;
	for (int i=1; i<=a; i++){
		f = f*i;
	}
	return f;
}
int main()
{
	float x,sum=1,i,n, b;
	scanf("%f%f",&n,&x);
	for(i=1;i<=n;i++)
	{
		b= fact(2*i);
		sum=sum+(pow(-1,i)*pow(x,2*i))/b;
	}
	printf("%f",sum);
	return 0;
}
