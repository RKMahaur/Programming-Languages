/*
ABCDE
 BCDE
  CDE
   DE
    E
*/
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1,k='A';j<=5;j++)
        {
            if(j>=i)
                printf("%c",k);
            else
                printf(" ");
            k++;
        }
        printf("\n");
    }
    return 0;
}