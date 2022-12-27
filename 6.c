//Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three sides\n");
    scanf(" %d %d %d",&a,&b,&c);
    if(a==b&&b==c&&c==a)
    printf("Equilateral\n");
    else if(a==b||b==c||c==a)
    printf("Isosceles\n");
    else
    printf("Scalene\n");
    return 0;
}