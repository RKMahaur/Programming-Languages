//Write a function to check whether a given number is a prime number or not.(TSRS)
#include<stdio.h>
int f1(int);
int main()
{
    int n,x;
    printf("Enter the number to check prime or not : ");
    scanf("%d",&n);
    x=f1(n);
    if(x==1)
        printf("Prime number.");
    else
        printf("Not a prime number.");
    return 0;
}
int f1(int a)
{
    int i;
    for(i=2;i<a;i++)
    {
        if(a%i == 0)
        return 0;
    }
    return 1;
}