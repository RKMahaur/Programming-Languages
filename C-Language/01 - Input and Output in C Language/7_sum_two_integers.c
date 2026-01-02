//Write a program to calculate sum of two integers. Numbers are taken from user through keyboard.
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter first number : ");
    scanf("%d",&x);
    printf("Enter second number : ");
    scanf("%d",&y);
    printf("Sum of %d and %d is %d",x,y,x+y);
    return 0;
}