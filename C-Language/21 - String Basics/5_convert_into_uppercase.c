//Write a program to convert a given string into uppercase.
#include<stdio.h>
int main()
{
    char str[20];
    int i;
    printf("Enter the string : ");
    fgets(str,20,stdin);
    for(i=0;str[i];i++);
    str[i-1]='\0';
    
    for(i=0;str[i];i++)
        if(str[i]>=97 && str[i]<=122)
            str[i]=str[i]-32;
    printf("String in uppercase is %s",str);
    return 0;
}