//Write a program to print the transpose of a given matrix.
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3];
    int i,j;
    printf("Enter the values of matrix[3][3] for transpose : ");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            b[j][i]=a[i][j];
    }
    printf("Transpose of matrix is : \n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            printf("%d ",b[i][j]);
        printf("\n");
    }
    return 0;
}