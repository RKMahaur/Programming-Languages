//Write a program to check whether a given number is an even number or odd number without using % operator.

#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number : ");
    scanf("%d",&x);
    if(x/2 * 2 ==x)
        printf("Even number.");
    else
        printf("Odd number.");
    return 0;
}