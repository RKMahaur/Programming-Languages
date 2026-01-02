//Write a program to take a three digit number from the user and rotate its digit by one position towards the right.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter three digit number : ");
    scanf("%d",&x);
    printf("Number after rotation is %d.",x%10*100 + x/10);
    return 0;
}