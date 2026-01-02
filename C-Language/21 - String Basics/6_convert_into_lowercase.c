//Write a program to convert a given string into lowercase.
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
        if(str[i]>=65 && str[i]<=90)
            str[i]=str[i]+32;
    printf("String in lowercase is %s",str);
    return 0;
}