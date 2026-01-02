//Write a recursive function to calculate factorial of a given number.
#include<stdio.h>
int f1(int);
int main()
{
    int a,b;
    printf("Enter number : ");
    scanf("%d",&a);
    b=f1(a);
    printf("%d",b);
    return 0;
}
int f1(int x)
{
    int fact=1;
    if(x==0)
    {
        return 1;
    }
    fact=x*f1(x-1);
    return fact;
}