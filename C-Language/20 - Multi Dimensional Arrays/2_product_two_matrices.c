//Write a program to calculate the product of two matrices each of order 3x3.
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],k,sum;
    int i,j;
    printf("Enter the values of matrix A[3][3] : ");
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            scanf("%d",&a[i][j]);

    printf("Enter the values of matrix B[3][3] : ");
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            scanf("%d",&b[i][j]);

    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
        {
            for(k=0,sum=0;k<=2;k++)
                sum=sum+a[i][k]*b[k][j];
            c[i][j]=sum;
        }
    printf("Product of matrix is : \n");
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            printf("%d ",c[i][j]);
        printf("\n");

    return 0;
}