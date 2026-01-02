//Write a recursive function to print binary of a given decimal number.
#include<stdio.h>
void dtob(int);
int main()
{
    int a;
    printf("Enter a number for binary : ");
    scanf("%d",&a);
    dtob(a);
    return 0;
}
void dtob(int x)
{
    if(x>0)
    {
        dtob(x/2);
        printf("%d",x%2);
    }
}