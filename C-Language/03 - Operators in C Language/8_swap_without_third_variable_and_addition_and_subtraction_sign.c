//Write a program to swap values of two variables witout using third variables and without using +,- operators.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("values after swap are %d and %d.",a,b);
    return 0;
}
