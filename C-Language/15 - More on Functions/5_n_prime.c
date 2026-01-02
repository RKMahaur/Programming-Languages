//Write a function to print first N prime numbers.(TSRN)
#include<stdio.h>
void print_prime(int);
int prime(int);
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    print_prime(n);
    return 0;
}
void print_prime(int a)
{
    int x=2;
    while(a)
    {
        if(prime(x))
        {
            printf("%d  ",x);
            a--;
        }
        x++;
    }
}
int prime(int x)
{
    int i;
    for(i=2;i<x;i++)
    {
        if(x%i == 0)
        return 0;
    }
    return 1;
}