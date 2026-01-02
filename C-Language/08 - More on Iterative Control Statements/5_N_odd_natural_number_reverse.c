//Write a program to print the first N odd natural numbers in reverse order.

#include<stdio.h>
int main()
{
    int N;
    printf("Enter the number : ");
    scanf("%d",&N);
    while(N)
    {
        printf("%d\n",2*N-1);
        N--;
    }
    return 0;
}