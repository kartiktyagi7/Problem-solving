//Write a program to calculate the total salary of a person. The user has to enter the basic salary 
//(an integer) and the grade (an uppercase character), and depending upon which the total salary is 
//calculated as -         totalSalary = basic + hra + da + allow – pf. where : hra = 20% of
// basic, da = 50% of basic, allow = 1700 if grade = ‘A’, allow = 1500 if grade = ‘B’, allow = 1300 if 
//grade = ‘C' or any other character, pf = 11% of basic. Round off the total salary and then print the 
//integral part only.

#include<stdio.h>
#include<math.h>
int main()
{
    int ts,basic,hra,da,allow,pf;
    char grade;
    printf("Enter the basic salary\n");
    scanf("%d",&basic);
    printf("Enter the grade\n");
    scanf(" %c",&grade);
    if(grade== 65)
    allow=1700;
    else if(grade==66)
    allow=1500;
    else
    allow=1300;
    hra=0.2*basic;
    da=0.5*basic;
    pf=0.11*basic;
    ts=basic+allow+hra+da-pf;
    printf("%d",ts);
    return 0;
}