//Write a program to reverse a string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],temp;
    int i,l;
    printf("Enter the string : ");
    fgets(str,20,stdin);
    for(i=0;str[i];i++);
    str[i-1]='\0';

    l=strlen(str);
    for(i=0;i<l/2;i++)
    {
        temp=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=temp;
    }
    printf("Reversed string is %s",str);
    return 0;
}