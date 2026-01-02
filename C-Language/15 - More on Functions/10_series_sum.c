/*Write a function to find the sum of first N terms of the series
1!/1+2!/2+3!/3+....n!/n (TSRS)*/
#include<stdio.h>
int f1(int);
int fact(int);
int main()
{
    int x,s;
    printf("Enter the term of series : ");
    scanf("%d",&x);
    s=f1(x);
    printf("Value is %d",s);
}
int fact(int a)
{
    int fact=1;
    while(a)
    {
        fact=fact*a;
        a--;
    }
    return fact;
}
int f1(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
        sum=sum+fact(i)/i;
    return sum;
}