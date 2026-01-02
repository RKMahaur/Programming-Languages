//1.Write a function to calculate the length of the string.
//2.Write a function to reverse a string.
//3.Write a function to compare two strings.
//4.Write a function to convert a given string into uppercase.
//5.Write a function to convert a given string into lowercase.
//6.Write a function to count vowels in a given string.
//7.Write a function to find the first occurence of the given character in a given string.
//8.Write a function to find character in a given string between specified incdices(start index(inclusive) and end index(exclusive)).
//9.Write a function to swap two characters of a given string with specified indices.
//10.Write a function to check whether a given string is an alphanumeric string or not.(Alphanumeric string must contain at least 1 alphabet and 1 digit).

#include<stdio.h>
#include<string.h>
int string_length(char []);
char* reverse(char []);
int string_compare(char [],char []);
void uppercase(char []);
void lowercase(char []);
int count_vowel(char []);
int character_index(char [],char);
int find_between(char [],char,int,int);
void swap_character(char [],int,int);
int is_alphanumeric(char []);

int string_length(char string[])
{
    int l;
    l=strlen(string);
    return l;
}
char* reverse(char string[])
{
    int i,l,temp;
    l=strlen(string);
    for(i=0;i<l/2;i++)
    {
        temp=string[i];
        string[i]=string[l-1-i];
        string[l-1-i]=temp;
    }
    return string;
}
int string_compare(char s1[],char s2[])
{
    int i;
    for(i=0;s1[i] && s2[i];i++)
        if(s1[i]!=s2[i])
            break;
    return s1[i]-s2[i];
}
void uppercase(char string[])
{
    int i;
    for(i=0;string[i];i++)
        if(string[i]>=97 && string[i]<=122)
            string[i]=string[i]-32;
    printf("String in uppercase is %s.",string);
}
void lowercase(char string[])
{
    int i;
    for(i=0;string[i];i++)
        if(string[i]>=65 && string[i]<=90)
            string[i]=string[i]+32;
    printf("String in lowercase is %s.",string);
}
int count_vowel(char string[])
{
    char v[]="aeiouAEIOU";
    int i,j,count=0;
    for(i=0;string[i];i++)
    {
        for(j=0;v[j];j++)
        {
            if(string[i]==v[j])
            {
                count++;
                break;
            }
        }
    }
    return count;
}
int character_index(char string[],char ch)
{
    int i;
    for(i=0;string[i];i++)
        if(string[i]==ch)
            return i;
    else
        return -1;
}
int find_between(char string[],char ch,int start_i,int end_i)
{
    int l=strlen(string);
    if(start_i<0)
        start_i=0;
    if(end_i>l)
        end_i=l;
    if(start_i>=l)
        return -1;
    for(int i=start_i;i<end_i;i++)
        if(ch==string[i])
            return i;
    return -1;
}
void swap_character(char string[],int i1,int i2)
{
    int temp;
    int l=string_length(string);
    if(i1<0 && i1>l-1 || i2<0 && i2>l-1)
        printf("Swap not possible.");
    else
    {
        temp=string[i1];
        string[i1]=string[i2];
        string[i2]=temp;
        printf("Swapped string is %s.",string);
    }
}
int is_alphanumeric(char string[])
{
    int i,digit=0,alpha=0;
    for(i=0;string[i];i++)
    {
        if(string[i]>='0'&&string[i]<='9')
            digit=1;
        if(string[i]>='a'&&string[i]<='z' || string[i]>='A'&&string[i]<='Z')
            alpha=1;
    }
    if(digit&&alpha)
        return 1;
    return 0;
}
int main()
{
    char str1[50];
    int i;
    printf("Enter first string : ");
    fgets(str1,50,stdin);
    for(i=0;str1[i];i++);
    str1[i-1]='\0';
    
    return 0;
}
