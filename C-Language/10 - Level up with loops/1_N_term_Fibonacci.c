//Write a program to find the Nth term of fibonacci series.
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
    }
    printf("The %d term of fibonacci series is %d.",n,c);
    return 0;
}