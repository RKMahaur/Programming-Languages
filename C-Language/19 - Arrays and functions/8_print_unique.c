//Write a function to print all unique elemts in an array.
#include<stdio.h>
void sort(int [],int);
int unique(int [],int);
int main()
{
    int a[10],k;
    printf("Enter the values of an array : ");
    for(int i=0;i<=9;i++)
        scanf("%d",&a[i]);
    k=unique(a,10);
    printf("%d",k);
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
}
int unique(int c[],int y)
{
    int i,j,count=0;
    sort(c,y);
    i=0;
    j=1;
    while(i<=y-1)
    {
        printf("%d ",c[i]);
        while(c[i]==c[j])
            j++;
        i=j;
        j=j+1;
    }
    return count;
}