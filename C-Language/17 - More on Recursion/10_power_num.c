//Write a program in C to calculate the power of any number using recursion.
#include<stdio.h>
float power(float,float);
int main()
{
    int a,b;
    float c;
    printf("Enter the number and its power : ");
    scanf("%d %d",&a,&b);
    c=power(a,b);
    printf("%f",c);
    return 0;
}
float power(float x,float y)
{
    if(y==0)
        return 1;
    if(y>0)
        return x*power(x,y-1);
    if(y<0)
        return power(x,y+1)/x;
}


