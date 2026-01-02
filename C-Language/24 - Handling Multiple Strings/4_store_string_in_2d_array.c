//Write a function to store each word a string in a 2 dimensional char array.
#include<stdio.h>
#include<string.h>
char* trim(char []);
int count_words(char []);
void string_to_word(char [],char [][50]);

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
void string_to_word(char string[],char w[][50])
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
}
int main()
{
    int i,r;
    char str[]="Hello my name is rohit.";
    r=count_words(str);
    char w[r][50];
    string_to_word(str,w);
    for(i=0;i<r;i++)
        printf("%s\n",w[i]);
    return 0;
}