//Write a recursive function to print reverse of a given number.
#include<stdio.h>
void reverse(int);
int main()
{
    int a;
    printf("Enter a number for binary : ");
    scanf("%d",&a);
    reverse(a);
    return 0;
}
void reverse(int x)
{
    if(x>0)
    {
        printf("%d",x%10);
        reverse(x/10);
    }
}