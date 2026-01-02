//Write a function to calculate the area of a circle.(TSRS)
#include<stdio.h>
float f1(int);
int main()
{
    int r;
    float x;
    printf("Enter the radius of circle for area : ");
    scanf("%d",&r);
    x=f1(r);
    printf("Area of circle is %.2f",x);
    return 0;
}
float f1(int a)
{
    float area;
    area=3.14*a*a;
    return area;
}