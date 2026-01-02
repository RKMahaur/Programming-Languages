//Write a  program to print all prime numbers under 100.
#include<stdio.h>
int main()
{
    int u=100,x,i;
    for(x=2;x<=u;x++)
    {
        for(i=2;i<x;i++)
        {
            if(x%i==0)
                break;
        }
        if(i==x)
            printf("%d\t",x);
    }
    return 0;
}