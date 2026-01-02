//Write a program to print unit digit of a given number.
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter any number : ");
    scanf("%d",&x);
    y=x%10;
    printf("Unit digit of number is %d",y);
    return 0;
}