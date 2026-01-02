//Write a function to count a total number of duplicate elements in an array.(Means elements that occurs 2 times in an array)
#include<stdio.h>
void sort(int [],int);
int count(int [],int);
int main()
{
    int a[10],k;
    printf("Enter the values of an array : ");
    for(int i=0;i<=9;i++)
        scanf("%d",&a[i]);
    k=count(a,10);
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
int count (int c[],int y)
{
    int i,j,count=0;
    sort(c,y);
    i=0;
    j=1;
    while(i<=y-2)
    {
        if(c[i]==c[j])
            count++;
        while(c[i]==c[j])
            j++;
        i=j;
        j=j+1;
    }
    return count;
}