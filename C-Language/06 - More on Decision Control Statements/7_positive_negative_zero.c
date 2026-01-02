//Write a program to check whether a given number is positive, negative or zero.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf(n>0?"Positive":n<0?"Negative":"Zero");
}
