//Write a recursive function to print octal of a given decimal number.
#include<stdio.h>
void dtoO(int);
int main()
{
    int a;
    printf("Enter a number for binary : ");
    scanf("%d",&a);
    dtoO(a);
    return 0;
}
void dtoO(int x)
{
    if(x>0)
    {
        dtoO(x/8);
        printf("%d",x%8);
    }
}