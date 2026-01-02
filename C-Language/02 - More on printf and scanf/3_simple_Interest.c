//Write a program to calculate simple interest.
#include<stdio.h>
int main()
{
    float p,r,t,SI;
    printf("Enter the Amount : ");
    scanf("%f",&p);
    printf("Enter the Rate of Interest : ");
    scanf("%f",&r);
    printf("Enter the Time : ");
    scanf("%f",&t);

    SI=(p*r*t)/100;
    printf("Simple Interest is %.2f",SI);
    return 0;
}