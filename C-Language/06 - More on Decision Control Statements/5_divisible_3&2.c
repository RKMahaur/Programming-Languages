//Write a program to check whether a given number is divisible by 3 and divisible by 2.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n%6)
        printf("Not divisible by 3 and 2.");
    else   
        printf("Divisible by 3 and 2.");
    return 0;    
}