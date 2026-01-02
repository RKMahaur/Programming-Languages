//Write a program in C to copy the elements of one array into another array. Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10],i,b[10];
    printf("Enter the values of an array : ");
    for(int i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
        b[i]=a[i];
    for(i=0;i<=9;i++)
        printf("%d ",b[i]);
    return 0;
}