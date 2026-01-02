//Write a recursive function to calculate sum of first N odd natural number.
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
    int sum=0;
    if(x==1)
    {
        return 1;
    }
    sum=x*2-1+f1(x-1);
    return sum;
}