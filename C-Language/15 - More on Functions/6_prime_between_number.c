//Write a function to print all Prime numbers between two given numbers.(TSRN)
#include<stdio.h>
void f1(int,int);
int main()
{
    int x,y;
    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);
    f1(x,y);
    return 0;
}
void f1(int a,int b)
{
    for(;a<=b;a++)
    {
        int i;
        for(i=2;i<a;i++)
        {
            if(a%i==0)
                break;
        }
        if(i==a)
            printf("%d\t",a);
    }
}