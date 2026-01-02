//Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0.(TSRS)
#include<stdio.h>
int f1(int);
int main()
{
    int num,x;
    printf("Enter a number to check even or odd : ");
    scanf("%d",&num);
    x=f1(num);
    printf("%d",x);
}
int f1(int a)
{
    if(a%2)
        return 0;    
    else 
        return 1;
}