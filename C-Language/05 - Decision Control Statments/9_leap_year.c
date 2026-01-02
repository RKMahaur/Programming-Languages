//Write a program to check whether a given year is a leap or not.

#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year :");
    scanf("%d",&year);
    if(year%100)
    {
        if(year%4)
            printf("Not a leap year.");
        else    
            printf("Leap year.");
       
    }
    else
    {
        if(year%400)
            printf("Not a leap year.");
        else
            printf("Leap year.");
    }
    return 0;
}