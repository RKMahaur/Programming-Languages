/*Write a function to rotate an array by n position in d direction. The d is an indicative value for left or right.
(Foe Example,if array of size 5 is [32,29,40,12,70]; n is 2 and d is left, then the resulting array after left rotation 2 times is
[40,12,70,32,29])*/
#include<stdio.h>
void rotate(int [],int,int,int);
int main()
{
    int a[10],c,d;
    printf("Enter the numbers in array : ");
    for(int i=0;i<=9;i++)
        scanf("%d",&a[i]);
    printf("Enter the no. of position and direction(for left= -1 and right= 1) : ");
    scanf("%d%d",&c,&d);
    rotate(a,10,c,d);
    return 0;
}
void rotate(int b[],int x,int n,int d)
{
    int temp;
    if(d==-1)
    {
        while(n)
        {
            temp=b[0];
            for(int i=0;i<=x-2;i++)
                b[i]=b[i+1];
            b[x-1]=temp;
            n--;
        }   
    }
    else
    {
        while(n)
        {
            temp=b[x-1];
            for(int i=x-2;i>=0;i--)
                b[i+1]=b[i];
            b[0]=temp;
            n--;
        }
    }
    for(int i=0;i<=9;i++)
        printf("%d ",b[i]);
}
