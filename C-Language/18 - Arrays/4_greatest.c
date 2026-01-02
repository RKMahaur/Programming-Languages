//Write a program to find the greatest number stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10],i,max;
    printf("Enter the values of an array : ");
    for(int i=0;i<=9;i++)
        scanf("%d",&a[i]);
    max=a[0];
    for(i=1;i<=9;i++)
    {
        if(max<a[i])
            max=a[i];
    }
    printf("Greatest number is %d",max);
    return 0;
}