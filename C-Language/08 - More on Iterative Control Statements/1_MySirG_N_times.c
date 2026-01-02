//Write a program to print MySirG N times on the screen.

#include<stdio.h>
int main()
{
    int i,a;
    i=1;
    printf("Enter the number : ");
    scanf("%d",&a);
    while(i<=a)
    {
        printf("MySirG\n");
        i++;
    }
    return 0;
}