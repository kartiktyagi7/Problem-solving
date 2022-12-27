//check whether the year entered by the user is a leap year or not.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the year you want to check that it is leap year or not\n");
    scanf("%d",&a);
    if((a%4==0)&&(a%400==0||a%100!=0))
    printf("Leap Year\n");
    else
    printf("Not a Leap Year\n");
    return 0;
}