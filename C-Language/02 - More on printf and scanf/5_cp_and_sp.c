//Write a program to ask user about the cost price and selling price banana per dozen. Calculate the profit or loss earned upon selling 25 bananas.
#include<stdio.h>
int main()
{
    float cp,sp,profit,loss;
    printf("Enter the cost price for per dozen banana : ");
    scanf("%f",&cp);
    printf("Enter the selling price for per dozen banana : ");
    scanf("%f",&sp); 

    profit=(sp-cp)*25/12;
    loss=(cp-sp)*25/12;

    if(cp>sp)
    {
        printf("Loss by selling 25 bananas is %.2f",loss);
    }
    else
    {
        printf("\nProfit by selling 25 bananas is %.2f",profit);
    }
    return 0;
}