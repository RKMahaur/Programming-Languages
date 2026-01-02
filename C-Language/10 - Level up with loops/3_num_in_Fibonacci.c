//Write a program to check whether a given number is there in the fibonacci series or not.
#include<stdio.h>
int main()
{
    int a=-1,b=1,n,c;
    printf("Enter a number to check in fibonacci series : ");
    scanf("%d",&n);
    while(1)
    {
        c=a+b;
        if(n==c)
        {
            printf("Number is in fibonacci series.");
            break;
        }
        if(c>n)
        {
            printf("Number not in  fibonacci series.");
            break;
        }
        a=b;
        b=c;
    }
    return 0;
}