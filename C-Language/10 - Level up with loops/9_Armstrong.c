//Write a program to check whether a number is armstrong number or not.
#include<stdio.h>
int main()
{
    int n,x,d=0,i,p,sum=0,l;
    printf("Enter the number : ");
    scanf("%d",&n);
    x=n;
    while(x)
    {
        x=x/10;
        d++;
    }
    for(x=n;x;x=x/10)
    {
        l=x%10;
        for(i=1,p=1;i<=d;i++)
        {
            p=p*l;
        }
        sum=sum+p;
    }
    if(sum==n)
        printf("%d is an armstrong number.",n);
    else
        printf("%d is not an armstrong number.",n);
    return 0;
}