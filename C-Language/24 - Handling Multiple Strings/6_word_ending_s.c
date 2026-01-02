//Write a program to find words ending with a letter 's' and store each such word in a 2d char array.
#include<stdio.h>
#include<string.h>
int count_words(char []);
void string_to_words_ends_with(char [],char [][20],char);
char* trim(char []);

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
void string_to_words_ends_with(char string[],char w[][20],char ch)
{
    int wcount,i,j,k;
    wcount=count_words(string);
    for(i=0,j=0,k=0;string[i];i++,k++)
    {
        if(string[i]!=' ')
            w[j][k]=string[i];
        else
        {
            if(w[j][k-1]!=ch)
                w[j][0]='\0';
            else
                w[j][k]='\0';
            j++;
            k=-1;
        }
    }
    if(w[j][k-1]!=ch)
        w[j][0]='\0';
    else
        w[j][k]='\0';
}
int main()
{
    char string[]="mysirg education services privated limited";
    char w[5][20];
    int i;
    string_to_words_ends_with(string,w,'s');
    for(i=0;i<5;i++)
        printf("%s\n",w[i]);
}
