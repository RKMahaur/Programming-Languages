//Write a program to check whether the given number is three digit number or not.

#include<stdio.h>
int main()
{
    int x;
    printf("Enter three digit number : ");
    scanf("%d",&x);
    if(x>=100 && x<=999)
        printf("%d is a three digit number.",x);
    else
        printf("%d is not a three digit number.",x);
    return 0;
}