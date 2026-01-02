//Write a function to print PASCAL Triangle.
#include<stdio.h>
void pascal(int);
int fact(int);
int comb(int,int);
int main()
{
    int n;
    printf("Enter the lines : ");
    scanf("%d",&n);
    pascal(n);
    return 0;
}
void pascal(int a)
{
    int i,j,k,y;
    for(i=1;i<=a;i++)
    {
        k=1;
        y=0;
        for(j=1;j<=2*a-1;j++)
        {
            if(j>=a+1-i && j<=a-1+i)
            {
                if(k)
                    printf("%d",comb(i-1,y++));
                else
                    printf(" ");
                k=1-k;
            }
            else    
                printf(" ");
        }
        printf("\n");
    }
}
int comb(int a,int b)
{
    int comb;
    comb=fact(a)/(fact(b)*fact(a-b));
    return comb;
}
int fact(int x)
{
    int fact=1;
    while(x)
    {
        fact=fact*x;
        x--;
    }
    return fact;
}
