//Write a program to count digits in a given number.

#include<stdio.h>
int main()
{
    int n,i=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    while(n)
    {
        n=n/10;
        i++;
    }
    printf("The number of digits in %d.",i);
}