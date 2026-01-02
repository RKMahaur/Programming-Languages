//Write a recursive function to print first N terms of fibonacci series.
#include<stdio.h>
void printfib(int);
int fib(int);
int main()
{
    int a;
    printf("Enter terms of fibonacci : ");
    scanf("%d",&a);
    printfib(a);
    return 0;
}
void printfib(int x)
{
    if(x==0)
        printf("%d ",x);
    else
    {
        printfib(x-1);
        printf("%d ",fib(x));
    }
}
int fib(int n)
{
    if(n==0 ||n==1)
        return n;
    return fib(n-1)+fib(n-2);
}

