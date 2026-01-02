//Write a program to check whether roots of a given quadratic equation are real and distinct,real and eqal or imaginary roots.

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the coefficient of quadratic equation(ax^2+bx+c) : ");
    scanf("%d %d %d",&a,&b,&c);
    if(b*b-4*a*c>0)
        printf("Roots are real and distinct.");
    else if(b*b-4*a*c==0)
        printf("Roots are real and equal.");
    else
        printf("Roots are imaginary.");
    return 0;
}