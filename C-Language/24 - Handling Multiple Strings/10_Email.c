//A 2d array is full with 10 email ids. Write a function to find how many of them belongs to gmail.com.
#include<stdio.h>
#include<string.h>
int is_end_with_string(char [],char []);

int is_end_with_string(char str[],char pattern[])
{
    int l,i;
    l=strlen(pattern);
    if(strlen(str)>l)
    {
        for(i=strlen(str)-1;i>=strlen(str)-strlen(pattern);i--)
            if(str[i]!=pattern[--l])
                return 0;
        return 1;
    }
    return 0;
}
int main()
{
    char email[]="example@gmail.com";
    char p[]="gmail.com";
    if(is_end_with_string(email,p))
        printf("It is a valid gmail id.");
    else
        printf("It is not a valid gmail id.");
    return 0;
}
