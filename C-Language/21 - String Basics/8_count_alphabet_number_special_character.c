//Write a program in C to count the total no. of alphabets, numbers and special character in a string.
#include<stdio.h>
int main()
{
    char str[50];
    int i,alpha_count=0,digit_count=0,special_count=0;
    printf("Enter the string : ");
    fgets(str,20,stdin);
    for(i=0;str[i];i++);
    str[i-1]='\0';

    for(i=0;str[i];i++)
    {
        switch(str[i])
        {
            case 'a' ... 'z':
            case 'A' ... 'Z':
                alpha_count++;
                break;
            case '0' ... '9':
                digit_count++;
                break;
            default:
                special_count++;
        }
    }
    printf("Alphabet = %d",alpha_count);
    printf("\nDigit = %d",digit_count);
    printf("\nSpecial Character = %d",special_count);
    return 0;
}