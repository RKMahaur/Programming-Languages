//Write a program to check whether a given number is an even number or odd number using bitwise operator.

#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number : ");
    scanf("%d",&x);
    if(x & 1)
        printf("Odd number.");
    else
        printf("Even number.");
    return 0;
}