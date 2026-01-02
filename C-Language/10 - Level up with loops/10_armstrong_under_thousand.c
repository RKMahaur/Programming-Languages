//Write a program to print all armstrong number under 1000.
#include<stdio.h>
int main()
{
    int n,x,d,i,p,sum,l;
    for(n=1;n<=1000;n++)
    {
        x=n;
        d=0;
        while(x)
        {
            x=x/10;
            d++;
        }
        for(x=n,sum=0;x;x=x/10)
        {
            l=x%10;
            for(i=1,p=1;i<=d;i++)
            {
                p=p*l;
            }
            sum=sum+p;
        }
        if(sum==n)
            printf("%d\t",n);
    }
    return 0;
}