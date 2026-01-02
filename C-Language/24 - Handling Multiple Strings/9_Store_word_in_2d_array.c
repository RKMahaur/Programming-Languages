//Write a function to store all words in a given string which are starting from 'a',in a 2d char array.
#include<stdio.h>
#include<string.h>
char* trim(char []);
int count_words(char []);
void string_to_word_starting_with(char [],char [][50],int,char);

char* trim(char string[])
{
    int i=0,j,last_space=0,k;
    for(k=strlen(string)-1;string[k]==' ';k--)
        last_space++;
    k=strlen(string);
    while(string[i]==' ')
        i++;
    for(j=0;string[j+i];j++)
        string[j]=string[j+i];
    string[k-last_space-i]='\0';
    return string;
}
int count_words(char string[])
{
    int i,count=0;
    trim(string);
    for(i=0;string[i];i++)
    {
        if(string[i]==' ')
        {
            if(string[i]==string[i+1])
                continue;
            else
                count++;
        }
    }
    return count+1;
}
void string_to_word_starting_with(char string[],char w[][50],int r,char ch)
{
    int i,j,k;
    for(i=0,j=0,k=0;string[i];i++,k++)
    {
        if(string[i]!=' ')
            w[j][k]=string[i];
        else
        {
            w[j][k]='\0';    
            j++;
            k=-1;
        }
    }
    w[j][k]='\0';
    for(i=0;i<r;i++)
        if(w[i][0]!=ch)
            w[i][0]='\0';
}
int main()
{
    int i,r;
    char str[]="Hello my name is aman.";
    r=count_words(str);
    char w[r][50];
    string_to_word_starting_with(str,w,r,'a');
    for(i=0;i<r;i++)
        printf("%s\n",w[i]);
    return 0;
}