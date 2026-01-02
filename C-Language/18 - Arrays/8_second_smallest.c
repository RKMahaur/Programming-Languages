//Write a program to find second smallest in an array. Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10],i,min,sec_min;
    printf("Enter the values of an array : ");
    for(int i=0;i<=9;i++)
        scanf("%d",&a[i]);
    if(a[0]<a[1])
    {
        min=a[0];
        sec_min=a[1];
    }
    else
    {
        min=a[1];
        sec_min=a[0];
    }
    for(i=2;i<=9;i++)
    {
        if(a[i]<min)
        {
            sec_min=min;
            min=a[i];
        }
        else
        {
            if(a[i]<sec_min)
                sec_min=a[i];
        }
    }
    printf("Second Largest number is %d",sec_min);
    return 0;
}