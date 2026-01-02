//Write a program in C to copy one string to another char array.
#include<stdio.h>
int main()
{
    char str[50],new[50];
    int i;
    printf("Enter the string : ");
    fgets(str,20,stdin);
    for(i=0;str[i];i++);
    str[i-1]='\0';

    for(i=0;str[i];i++)
        new[i]=str[i];
    printf("Copied string is %s",new);
    return 0;
}