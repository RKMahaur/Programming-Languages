//Write a function to calculate simple interest.(TSRS)
#include<stdio.h>
float f1(int,int,int);
int main()
{
    float p,r,t,x;
    printf("Enter the Principal amount : ");
    scanf("%f",&p);
    printf("Enter the Rate of Interest : ");
    scanf("%f",&r);
    printf("Enter the Time : ");
    scanf("%f",&t);
    x=f1(p,r,t);
    printf("Simple Interest is %.2f",x);
    return 0;
}
float f1(int a,int b,int c)
{
    float SI;
    SI=(a*b*c)/100;
    return SI;
}