//Write a recursive function to calculate sum of digits of a given numbers.
#include<stdio.h>
int f1(int);
int main()
{
    int a,b;
    printf("Enter number : ");
    scanf("%d",&a);
    b=f1(a);
    printf("%d",b);
    return 0;
}
int f1(int x)
{
    int sum=0;
    if(x==0)
    {
        return 0;
    }
    sum=x%10+f1(x/10);
    return sum;
}