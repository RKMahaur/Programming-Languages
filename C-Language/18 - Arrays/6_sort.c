//Write a program to sort elements of an array of size 10.Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10],i,s,j;
    printf("Enter the values of an array : ");
    for(int i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(j=1;j<=9;j++)
    {
        for(i=0;i<=9-j;i++)
        {
            if(a[i]>a[i+1]);
            {
                s=a[i];
                a[i]=a[i+1];
                a[i+1]=s;
            }
        }
    }
    for(i=0;i<=9;i++)
        printf("%d ",a[i]);
    return 0;
}