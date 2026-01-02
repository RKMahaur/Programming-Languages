//Write a function to check whether a pair of strings are anagram or not.Both the strings are stored in a 2d char array.
#include<stdio.h>
#include<string.h>
char* sorting(char s[]);
int is_anagram(char s1[],char s2[]);

char* sorting(char s[])
{
    int r,i;
    char t;
    for(r=1;r<=strlen(s)-1;r++)
    {
        for(i=0;i<=strlen(s)-1-r;i++)
        {
            if(s[i]>s[i+1])
            {
                t=s[i];
                s[i]=s[i+1];
                s[i+1]=t;
            }
        }
    }
    return s;
}
int is_anagram(char s1[],char s2[])
{
    return strcmp(sorting(s1),sorting(s2))==0;
}
int main()
{
    char s1[]="pear",s2[]="reap";
    if(is_anagram(s1,s2))
        printf("Anagram");
    else
        printf("Not a Anagram");
    return 0;
}