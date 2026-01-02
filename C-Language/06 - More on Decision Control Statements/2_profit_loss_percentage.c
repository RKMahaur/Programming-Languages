//Write a program which take the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.

#include<stdio.h>
int main()
{
    float cp,sp;
    printf("Enter the cost price : ");
    scanf("%f",&cp);
    printf("Enter the selling price : ");
    scanf("%f",&sp);
    if(cp>sp)
        printf("Loss percentage is %.2f ",(cp-sp)/cp*100);
    else    
        if(sp>cp)
            printf("Profit percentage is %.2f",(sp-cp)/cp*100);
        else
            printf("No profit and No loss.");
    return 0;
} 