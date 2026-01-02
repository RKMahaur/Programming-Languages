//Write a program to calculate LCM of 2 numbers.
#include<stdio.h>
int main()
{
    int LCM,a,b;
    printf("Enter any two numbers for LCM : ");
    scanf("%d %d",&a,&b);
    for(LCM=a>b?a:b;LCM<=a*b;LCM++)
    {
        if(LCM%a==0 && LCM%b==0)
        {
            printf("LCM of %d and %d is %d.",a,b,LCM);
            break;
        }
    }
    return 0;
}
/* another method
#include<stdio.h>
int main()
{
    int a,b,l=1,flag=0,i=2;
    printf("Enter any two numbers for LCM : ");
    scanf("%d %d",&a,&b);
    for(i=2;a>1 || b>1;)
    {
        if(a%i == 0)
        {
            a=a/i;
            flag=1;
        }
        if(b%i == 0)
        {
            b=b/i;
            flag=1;
        }
        if(flag==1)
        {
            l=l*i;
            flag=0;
        }
        else
            i++;
    }
    printf("LCM is %d",l);
    return 0;
}*/