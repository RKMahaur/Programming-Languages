//Write a function to print all armstrong numbers between two given numbers.(TSRN)
#include<stdio.h>
void f1(int,int);
int main()
{
    int n,p;
    printf("Enter range of armstrong : ");
    scanf("%d%d",&n,&p);
    f1(n,p);
    return 0;
}
void f1(int a,int b)
{
    int x,d,i,p,sum,l;
    for(a;a<=b;a++)
    {
        x=a;
        d=0;
        while(x)
        {
            x=x/10;
            d++;
        }
        for(x=a,sum=0;x;x=x/10)
        {
            l=x%10;
            for(i=1,p=1;i<=d;i++)
            {
                p=p*l;
            }
            sum=sum+p;
        }
        if(sum==a)
            printf("%d\t",a);
    }
}