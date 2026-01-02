//Write a program to calculate sum of first N odd natural numbers.

#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+2*i-1;
        i=i+1;
    }
    printf("Sum = %d",sum);
    return 0;
}