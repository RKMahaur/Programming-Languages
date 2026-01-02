//Write a program to calculate area of a rectangle. Input appropriate data from the user.
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the length of the rectangle : ");
    scanf("%d",&x);
    printf("Enter the breadth of the rectangle : ");
    scanf("%d",&y);
    printf("Area of rectangle is %d",x*y);
    return 0;
}