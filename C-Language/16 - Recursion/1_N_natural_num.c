//Write a recursive function to print first N natural numbers.
#include<stdio.h>
void f1(int);
int main()
{
    int a;
    printf("Enter number to print : ");
    scanf("%d",&a);
    f1(a);
    return 0;
}
void f1(int x)
{
    if(x>0)
    {
        f1(x-1);
        printf("%d  ",x);
    }
}