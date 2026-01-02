//Write a program to calculate the length of the string.(without using builtin method)
#include<stdio.h>
int main()
{
    char str[20],i;
    printf("Enter the string : ");
    fgets(str,20,stdin);
    for(i=0;str[i];i++);
    str[i-1]='\0';
    for(i=0;str[i];i++);
    printf("%d",i);
    return 0;
}