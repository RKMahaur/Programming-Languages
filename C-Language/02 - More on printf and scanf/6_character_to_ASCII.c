//Write a program to input a character from the user and print its ASCII code.
#include<stdio.h>
void main()
{
    char ch;
    printf("Enter the character : ");
    scanf("%c",&ch);
    printf("ASCII = %d",ch);
    return 0;
}