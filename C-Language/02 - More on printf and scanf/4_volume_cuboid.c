//Write a program to calculate volume of a cuboid.
#include<stdio.h>
int main()
{
    float l,b,h,vol;
    printf("Enter the length : ");
    scanf("%f",&l);
    printf("Enter the breadth : ");
    scanf("%f",&b);
    printf("Enter the height : ");
    scanf("%f",&h);

    vol=l*b*h;
    printf("Volume of cuboid is %.2f",vol);
    return 0;
}