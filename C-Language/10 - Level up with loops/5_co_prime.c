//Write a program to check whether two given numbers are co-prime numbers or not.
#include<stdio.h>
int main()
{
    int a,b,H;
    printf("Enter two numbers for HCF : ");
    scanf("%d %d",&a,&b);
    for(H=a<b?a:b;H>=1;H--)
    {
        if(a%H==0 && b%H==0)
            break;
    }
    if(H==1)
        printf("Numbers are co prime.");
    else
        printf("Numbers are not co prime.");
    return 0;
}