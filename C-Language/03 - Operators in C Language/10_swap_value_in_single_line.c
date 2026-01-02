//Write a program to swap values of 2 int variables in single line arithmetic expression.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    a=a+b-(b=a);
    printf("values after swap are %d and %d.",a,b);
    return 0;
}
