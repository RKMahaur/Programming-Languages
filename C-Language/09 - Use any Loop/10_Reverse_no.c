//WAP to reverse a given number.
#include<stdio.h>
int main()
{
    int n,x=0;
    printf("Enter the number for reverse : ");
    scanf("%d",&n);
    while(n)
    {
        x=x*10+n%10;
        n=n/10;
    }
    printf("%d",x);
    return 0;
}