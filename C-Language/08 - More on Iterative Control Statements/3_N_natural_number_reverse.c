//Write a program to print First N natural numbers in reverse order.

#include<stdio.h>
int main()
{
    int N;
    printf("Enter the number : ");
    scanf("%d",&N);
    while(N)
    {
        printf("%d\n",N);
        N--;
    }
    return 0;
}