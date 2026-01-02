//Write a program to input a three digit number and display the sum of the digits.
#include<stdio.h>
int main()
{
    int x,a ;
    printf("Enter three digit number : ");
    scanf("%d",&x);
    a=x/100 + x/10%10 + x%10;
    printf("Sum of digits : %d",a);
    return 0;
}