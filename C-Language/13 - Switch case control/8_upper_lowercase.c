//Write a program top check whether a given character is uppercase alphabet or lowercase alphabet or some other special character ,using switch case statement.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character : ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 65 ... 90:
            printf("Uppercase");
            break;
        case 97 ... 122:
            printf("Lowercase");
            break;
        default:
            printf("Special character");
    }
    return 0;
}