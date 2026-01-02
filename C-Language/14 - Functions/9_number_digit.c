//Write a program to check whether a given number contains a given digit or not.(TSRS)
#include<stdio.h>
int f2(int,int);
int main()
{
    int num,d,x;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Enter a digit : ");
    scanf("%d",&d);
    x=f2(num,d);
    if(x==1)
        printf("Digit %d is in %d.",d,num);
    else
        printf("Digit %d is not in %d.",d,num);
    return 0;
}
int f2(int a,int b)
{
    int j;
    for(;a;a=a/10)
    {
        j=a%10;
        if(j==b)
            return 1;
    }
    return 0;
}