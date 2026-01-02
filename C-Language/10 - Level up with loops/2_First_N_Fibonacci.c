//Write a program to print first N terms of Fibonacci series.
#include<stdio.h>
int main()
{
    int a=-1,b=1,n,i,c;
    printf("Enter a number for fibonacci series : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\t",c);
    }
    return 0;
}