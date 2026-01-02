//Write a function to print first Nth term of fibonacci series.(TSRN)
#include<stdio.h>
void f1(int);
int main()
{
    int n;
    printf("Enter a number for fibonacci series : ");
    scanf("%d",&n);
    f1(n);
    return 0;
}
void f1(int x)
{
    int i,a=-1,b=1,c;
    for(i=1;i<=x;i++)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
}