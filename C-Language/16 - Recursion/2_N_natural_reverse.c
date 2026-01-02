//Write a recursive function to print first N natural numbers in reverse order.
#include<stdio.h>
void f1(int);
int main()
{
    int a;
    printf("Enter number to print in reverse order : ");
    scanf("%d",&a);
    f1(a);
    return 0;
}
void f1(int x)
{
    if(x>0)
    {
        printf("%d  ",x);
        f1(x-1);
    }
}