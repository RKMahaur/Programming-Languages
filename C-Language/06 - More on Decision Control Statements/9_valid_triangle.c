//Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the sides of the triangle : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c)
    {
        if(b+c>a)
        {
            if(a+c>b)
                printf("Valid Triangle");
            else
                printf("Not a Valid Triangle");
        }
        else
            printf("Not a Valid Triangle");
    }
    else
        printf("Not a valid triangle");
    return 0;
}
  