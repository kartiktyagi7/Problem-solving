//Write a C program to read temperature in centigrade and display a suitable message according to temperature 
//state below : 
//Temp < 0 then Freezing weather
//Temp 0-10 then Very Cold weather
//Temp 10-20 then Cold weather
//Temp 20-30 then Normal in Temp
//Temp 30-40 then Its Hot
//Temp >=40 then Its Very Hot

#include<stdio.h>
int main()
{
    int t;
    printf("Enter the temperature\n");
    scanf("%d",&t);
    if(t<0)
    printf("Freezing weather\n");
    if(t>=0&&t<=10)
    printf("Very Cold weather\n");
    if(t>=10&&t<=20)
    printf("Cold weather\n");
    if(t>=20&&t<=30)
    printf("Normal in Temp\n");
    if(t<=30&&t>=40)
    printf("Its Hot\n");
    if(t>=40)
    printf("Its Very Hot\n");
    return 0;
}