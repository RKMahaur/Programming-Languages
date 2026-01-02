//Write a program to calculate HCF of two numbers.
#include<stdio.h>
int main()
{
    int a,b,H;
    printf("Enter two numbers for HCF : ");
    scanf("%d %d",&a,&b);
    for(H=a<b?a:b;H>=1;H--)
    {
        if(a%H==0 && b%H==0)
            {
                printf("HCF is %d",H);
                break;
            }
    }
    return 0;
}