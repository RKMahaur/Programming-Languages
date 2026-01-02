//Write a program to count the occurence of a given character in a given string.
#include<stdio.h>
int main()
{
    char str[20],n;
    int i,count;
    printf("Enter the string : ");
    fgets(str,20,stdin);
    for(i=0;str[i];i++);
    str[i-1]='\0';

    printf("Enter the character : ");
    scanf("%c",&n);
    
    for(i=0,count=0;str[i];i++)
        if(str[i]==n)
            count++;
    
    printf("Occurence of %c in %s = %d",n,str,count);
    return 0;
}