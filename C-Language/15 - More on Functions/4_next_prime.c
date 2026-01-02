//Write a function to find the next prime number of a given number.(TSRS)
#include<stdio.h>
int prime(int);
int next_prime(int);
int main()
{
    int n,y;
    printf("Enter any number : ");
    scanf("%d",&n);
    y=next_prime(n);
    printf("Next prime is %d.",y);
    return 0;
}
int next_prime(int n)
{
    while(!prime(++n));
    return n;
}
int prime(int a)
{
    int i;
    for(i=2;i<a;i++)
    {
        if(a%i == 0)
        return 0;
    }
    return 1;
}