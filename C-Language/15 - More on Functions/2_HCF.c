//Write a function to calculate HCF of two numbers.(TSRS)
#include<stdio.h>
int f1(int,int);
int main()
{
    int a,b,x;
    printf("Enter any two numbers for HCF : ");
    scanf("%d %d",&a,&b);
    x=f1(a,b);
    printf("HCF is %d",x);
    return 0;
}
int f1(int x,int y)
{
    int HCF;
    for(HCF=x<y?x:y;HCF>=1;HCF--)
    {
        if(x%HCF==0 && y%HCF==0)
        return HCF;
    }
}