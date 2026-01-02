//Write a program to calculate size of a character constant.
#include<stdio.h>
int main()
{
    int x;
    char ch;
    printf("Enter any character : ");
    scanf("%c",&ch);
    x=sizeof(printf("%c",ch));
    printf("Size of character constant is %d",x);
    return 0;
}