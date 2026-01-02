//Write a program to make the last digit of a number stored in a variable as zero. (Example-if x=2345 then make it x=2340)
#include<stdio.h>
int main()
{
    int x,a;
    printf("Enter the number : ");
    scanf("%d",&x);
    a=x/10*10;
    printf("New number is %d",a);
    return 0;
}