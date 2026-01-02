//Write a function to calculate the factorial of a number.(TSRS)
#include<stdio.h>
int f1(int);
int main()
{
    int num,x;
    printf("Enter a number : ");
    scanf("%d",&num);
    x=f1(num);
    printf("Factorial of %d is %d.",num,x);
    return 0;
}
int f1(int a)
{
    int fact=1,i;
    for(i=1;i<=a;i++)
        fact=fact*i;
    return fact;
}