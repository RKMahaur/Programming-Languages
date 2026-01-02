//Write a program to find second largest in an array. Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10],i,max,sec_max;
    printf("Enter the values of an array : ");
    for(int i=0;i<=9;i++)
        scanf("%d",&a[i]);
    if(a[0]>a[1])
    {
        max=a[0];
        sec_max=a[1];
    }
    else
    {
        max=a[1];
        sec_max=a[0];
    }
    for(i=2;i<=9;i++)
    {
        if(a[i]>max)
        {
            sec_max=max;
            max=a[i];
        }
        else
        {
            if(a[i]>sec_max)
                sec_max=a[i];
        }
    }
    printf("Second Largest number is %d",sec_max);
    return 0;
}