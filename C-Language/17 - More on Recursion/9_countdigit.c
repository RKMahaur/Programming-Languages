//Write a program in C to count the digits of a given number using recursion.
#include<stdio.h>
int count(int);
int main()
{
    int a,b;
    printf("Enter the number : ");
    scanf("%d",&a);
    b=count(a);
    printf("%d",b);
    return 0;
}
int count(int x)
{
    if(x==0)
        return 0;
    return 1+ count(x/10);
}


