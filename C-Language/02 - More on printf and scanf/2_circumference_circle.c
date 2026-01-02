//Write a program to calculate circumference of a circle.
#include<stdio.h>
int main()
{
    int r;
    float C;
    printf("Enter the Radius : ");
    scanf("%d",&r);

    C=2*3.14*r;
    printf("Circumference of circle is %.2f",C);
    return 0;
}