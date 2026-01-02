//Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2,2,3,3.(TSRN)
#include<stdio.h>
void f1(int);
int main()
{
    int num;
    printf("Enter the number for factors : ");
    scanf("%d",&num);
    f1(num);
    return 0;
}
void f1(int a)
{
    int i;
    for(i=2;a>1;)
    {
        if(a%i==0)
        {
            a=a/i;
            printf("%d\n",i);
        }
        else    
            i++;
    }
}