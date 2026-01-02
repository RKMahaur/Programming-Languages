//Write a function to calculate the number of combinations one can make from n items and r selected at a time.(TSRS)
#include<stdio.h>
int fact(int);
int combination(int,int);
int main()
{
    int n,r,x;
    printf("Enter total items(n) : ");
    scanf("%d",&n);
    printf("Enter selected items(r) : ");
    scanf("%d",&r);
    x=combination(n,r);
    printf("Total number of combination is %d.",x);
    return 0;
}
int fact(int f)
{
    int fact=1,i;
    for(i=1;i<=f;i++)
        fact=fact*i;
    return fact;
}
int combination(int a,int b)
{
    int x;
    x=fact(a)/(fact(b)*fact(a-b));
    return x;
}