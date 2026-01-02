//Assume price of 1 USD is INR 84.23. Write a program to take the amount in INR and convert it into USD.
#include<stdio.h>
int main()
{
    float inr,usd;
    printf("Enter the amount in INR : ");
    scanf("%f",&inr);
    usd=inr/84.23;
    printf("Amount in usd is %.2f",usd);
    return 0;
}