//Write a program to calculate factorial of a number.

#include<stdio.h>
int main()
{
    int i,fact=1,num;
    printf("Enter the number for factorial : ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("%d is factorial of %d",fact,num);
    return 0;
}