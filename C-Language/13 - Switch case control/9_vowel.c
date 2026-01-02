//Write a program to check whether a given character is vowel or consonant or some other special character, using switch case statement.
#include<stdio.h>
int main()
{
    char ch,i;
    printf("Enter the character to check vowel or consonant : ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("Vowel");
            break;
        case 'b' ... 'd': case 'f' ... 'h': case 'j' ... 'n': case 'p' ... 't': case 'v' ... 'z':
        case 'B' ... 'D': case 'F' ... 'H': case 'J' ... 'N': case 'P' ... 'T': case 'V' ... 'Z':
            printf("consonant");
            break;
        default:
            printf("Special character");
    }
    return 0;
}