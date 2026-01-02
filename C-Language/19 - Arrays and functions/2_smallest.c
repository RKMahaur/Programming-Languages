//Write a function to find the smallest number from the given array of any size.(TSRS)
#include<stdio.h>
int smallest(int [],int);
int main()
{
    int a[10],small;
    printf("Enter the values of an array : ");
    for(int i=0;i<=9;i++)
        scanf("%d",&a[i]);
    small = smallest(a,10);
    printf("Greatest number is %d",small);
    return 0;
}
int smallest(int b[],int x)
{
    int i,min;
    min=b[0];
    for(i=1;i<=x-1;i++)
    {
        if(min>b[i])
            min=b[i];
    }
    return min;
}