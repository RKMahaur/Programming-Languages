//Write a function to find the greatest number from the given array of any size.(TSRS)
#include<stdio.h>
int greatest(int [],int);
int main()
{
    int a[10],great;
    printf("Enter the values of an array : ");
    for(int i=0;i<=9;i++)
        scanf("%d",&a[i]);
    great = greatest(a,10);
    printf("Greatest number is %d",great);
    return 0;
}
int greatest(int b[],int x)
{
    int i,max;
    max=b[0];
    for(i=1;i<=x-1;i++)
    {
        if(max<b[i])
            max=b[i];
    }
    return max;
}