//Write a C program to accept a coordinate point in a XY coordinate system and determine in which quadrant 
//the coordinate point lies.

#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the coordinates");
    scanf("%d %d",&x,&y);
    if(x>0&&y>0)
    printf("First Quadrant\n");
    if(x>0&&y<0)
    printf("Second Quadrant\n");
    if(x<0&&y<0)
    printf("Third Quadrant\n");
    if(x<0&&y>0)
    printf("Fourth Quadrant\n");
    return 0;
}