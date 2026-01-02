//Write a program to calculate the sum of all even numbers and sum of all odd numbers,which are stored in an array in an array of size 10.Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10],i,sumE=0,sumO=0;
    printf("Enter the values of an array : ");
    for(int i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    {
        if(a[i]%2==0)
            sumE=sumE+a[i];
        else    
            sumO=sumO+a[i];
    }
    printf("sum of even numbers %d",sumE);
    printf("\nsum of even numbers %d",sumO);
    return 0;
}