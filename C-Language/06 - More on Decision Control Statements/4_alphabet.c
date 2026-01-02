//Write a program to check whether a given alphabet is in uppercase or lowercase.

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the alphabet : ");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
        printf("Uppercase");
    else if(ch>=97 && ch<=122)
        printf("Lowercase");
    else
        printf("%c is not an Alphabet.",ch);
    return 0;
}