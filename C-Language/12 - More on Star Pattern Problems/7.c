/*
    1
   1 1
  1 2 1
 1 2 2 1
1 2 3 2 1
*/
#include<stdio.h>
int main()
{
    int i,j,k,x;
    for(i=1;i<=5;i++)
    {
        k=1;
        x=1;
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
            {
                if(k)
                {
                    printf("%d",x);
                    j<5?x++:x--;
                }
                else
                {
                    printf(" ");
                    if(j==5)
                        x--;
                }
                k=1-k;
            }
            else    
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}