//Write a  program to print all prime numbers between two given numbers.
#include<stdio.h>
int main()
{
    int u,x,i;
    printf("Enter two numbers:");
    scanf("%d%d",&x,&u);
    for(;x<=u;x++)
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