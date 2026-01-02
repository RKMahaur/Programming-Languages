//Write a program to count space in a given string.
#include<stdio.h>
int main()
{
    char str[20];
    int i,count=0;
    printf("Enter the string : ");
    fgets(str,20,stdin);
    for(i=0;str[i];i++);
    str[i-1]='\0';
    
    for(i=0;str[i];i++)
        if(str[i]==' ')
            count++;
    printf("Space in %s is %d.",str,count);
    return 0;
}