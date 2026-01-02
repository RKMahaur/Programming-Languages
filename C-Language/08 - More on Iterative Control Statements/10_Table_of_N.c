//Write a program to print a table of N.

#include<stdio.h>
int main()
{
    int i=1,N;
    printf("Enter the number : ");
    scanf("%d",&N);
    
    while(i<=10)
    {
        printf("%d\n",N*i);
        i++;
    }
    return 0;
}