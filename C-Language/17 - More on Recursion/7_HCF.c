//Write a recursive function to calculate HCF of two numbers.
#include<stdio.h>
int HCF(int,int);
int main()
{
    int a,b,hcf;
    printf("Enter 2 numbers for HCF : ");
    scanf("%d %d",&a,&b);
    hcf=HCF(a,b);
    printf("%d",hcf);
    return 0;
}
int HCF(int x,int y)
{
    if(x>y)
    {
        if(x%y==0)
            return y;
        else
            return HCF(x%y,y);
    }
    else
    {
        if(y%x==0)
            return x;
        else
            return HCF(x,y%x);
    }
}