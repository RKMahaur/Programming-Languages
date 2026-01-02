//Write a program to print the first N even natural numbers in reverse order.

#include<stdio.h>
int main()
{
    int N;
    printf("Enter the numbers : ");
    scanf("%d",&N);
    while(N)
    {
        printf("%d\n",2*N);
        N--;
    }
    return 0;
}