//Write a program to print greator between two numbers. Print one number if both are the same.

#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two numbers :");
    scanf("%d %d",&x,&y);
    if(x>y)
        printf("%d is the greater number.",x);
    else    
        printf("%d is the greater number.",y);
    return 0;
}