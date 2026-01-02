//Write a function to swap two elements of given array with specified indices.
#include<stdio.h>
void swap(int [],int,int,int);
int main()
{
    int a[10],c,d;
    printf("Enter the numbers in array : ");
    for(int i=0;i<=9;i++)
        scanf("%d",&a[i]);
    printf("Enter two indices for swap : ");
    scanf("%d %d",&c,&d);
    swap(a,10,c,d);
    return 0;
}
void swap(int b[],int x,int i1,int i2)
{
    int temp;
    temp=b[i1];
    b[i1]=b[i2];
    b[i2]=temp;
}