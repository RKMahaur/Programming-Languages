//Write a program to calculate average of three integers. Number are given by the user.
#include<stdio.h>
int main()
{
    int x,y,z;
    float avg;
    printf("Enter the first number : ");
    scanf("%d",&x);
    printf("Enter the second number : ");
    scanf("%d",&y);
    printf("Enter the third number : ");
    scanf("%d",&z);
    avg=(x+y+z)/3.0;
    printf("Average of %d, %d, %d is %.2f",x,y,z,avg);
    return 0;
}