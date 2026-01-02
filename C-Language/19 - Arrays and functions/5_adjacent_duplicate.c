//Write a function to find the first occurence of adjacent duplicate values in the array. Function has to return value of the element.
#include<stdio.h>
int adjacent_duplicate(int [],int);
int main()
{
    int a[10],c;
    printf("Enter the numbers in array : ");
    for(int i=0;i<=9;i++)
        scanf("%d",&a[i]);
    c=adjacent_duplicate(a,10);
    printf("%d",c);
    return 0;
}
int adjacent_duplicate(int b[],int x)
{
    for(int i=0;i<=x-2;i++)
    {
        if(b[i]==b[i+1])
            return b[i];
    }
    return -1;
}