//Write a program to check whether a number is a prime number or not.
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number to check prime or not : ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i == 0)
            break;
    }
    if(i==n)
        printf("Prime number.");
    else
        printf("Non Prime.");
    return 0;
}