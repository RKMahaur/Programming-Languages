//Write a program to input three characters from the user and display characters with their corresponding ASCII codes.
#include<stdio.h>
void main()
{
    char a,b,c;
    printf("Enter three character : ");
    scanf("%c %c %c",&a,&b,&c);
    printf("%c - %d",a,a);
    printf("%c - %d",b,b);
    printf("%c - %d",c,c);
    return 0;
}