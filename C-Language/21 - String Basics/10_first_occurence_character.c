//Write a program to find the first occurence of the given character in a given string.
#include<stdio.h>
int main()
{
    char str[50],n;
    int i;
    printf("Enter the string : ");
    fgets(str,20,stdin);
    for(i=0;str[i];i++);
    str[i-1]='\0';
    fflush(stdin);

    printf("Enter the character to find the index : ");
    scanf("%c",&n);

    for(i=0;str[i];i++)
        if(str[i]==n)
            break;
    if(str[i]==0)
        printf("%c is not found in %s.",n,str);
    else
        printf("%c is fount in %s at index %d.",n,str,i);
    return 0;
}