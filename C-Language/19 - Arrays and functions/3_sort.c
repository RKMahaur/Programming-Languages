//Write a function to sort an array of any size.(TSRN)
#include<stdio.h>
void sort(int [],int);
int main()
{
    int a[10];
    printf("Enter the values of an array : ");
    for(int i=0;i<=9;i++)
        scanf("%d",&a[i]);
    sort(a,10);
    return 0;
}
void sort(int b[],int x)
{
    int i,j,s;
    for(j=1;j<=9;j++)
    {
        for(i=0;i<=9-j;i++)
        {
            if(b[i]>b[i+1]);
            {
                s=b[i];
                b[i]=b[i+1];
                b[i+1]=s;
            }
        }
    }
    for(i=0;i<=9;i++)
        printf("%d ",b[i]);
}