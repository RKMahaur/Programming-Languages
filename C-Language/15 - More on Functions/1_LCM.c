//Write a function to calculate LCM of two numbers.(TSRS)
#include<stdio.h>
int f1(int,int);
int main()
{
    int a,b,x;
    printf("Enter any two numbers for LCM : ");
    scanf("%d %d",&a,&b);
    x=f1(a,b);
    printf("LCM is %d",x);
    return 0;
}
int f1(int x,int y)
{
    int LCM;
    for(LCM=x>y?x:y;LCM<=x*y;LCM++)
    {
        if(LCM%x==0 && LCM%y==0)
        return LCM;
    }
}