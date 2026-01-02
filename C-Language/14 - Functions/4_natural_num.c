//Write a function to print first N natural numbers.(TSRN)
#include<stdio.h>
void f1(int);
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    f1(num);
    return 0;
}
void f1(int a)
{
    int i;
    for(i=1;i<=a;i++)
        printf("%d\n",i);
}