//1.Write a function to check whether a given string is palindrome or not.
//2.Write a function to trim a string (removing leading spaces from both the ends).
//3.Write a function to count words in a given string.
//4.Write a function to reverse a string word wise.(For example if the given string is "Mysirg Education Services" then the resulting string should be "Services Education Mysirg")
//5.Write a function to do case insensitive comparison of two strings.
//6.Write a function to count frequency of each character of the given string.
//7.Write a function to find a word in a given string.
//8.Write a function to make first character of each word of the string capital.
//9.Write a function to make acronym name from a given name. For example, "Ramesh Chand Tiwari becomes "R C Tiwari", "Bhavesh Gupta" becomes "B Gupta.
//10.Write a function to concatenate two strings.

#include<stdio.h>
#include<string.h>
int is_palindrome(char []);
char* trim(char []);
int count_words(char []);
char* reverse_word_wise(char []);
int casein_comparison(char [],char []);
void print_frequency(char []);
int find_word(char [],char []);
char* capatalize(char []);
char* concatenate(char [],char []);
char* acronym(char []);

int is_palindrome(char string1[])
{
    int l,i;
    l=strlen(string1);
    for(i=0;i<l/2;i++)
        if(string1[i]!=string1[l-1-i])
            return 0;
    return 1;
    /* Another method
    char string2[50],temp;
    int l,i;
    strcpy(string2,string1);
    l=strlen(string2);
    for(i=0;i<l/2;i++)
    {
        temp=string2[i];
        string2[i]=string2[l-1-i];
        string2[l-1-i]=temp;
    }
    for(i=0;i<l;i++)
        if(string1[i]==string2[i]);
    if(i==l)
        return 1;
    else    
        return 0;
    */
}
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
char* reverse_word_wise(char string[])
{
    int i,j,k,word_count;
    word_count=count_words(string);
    char s[word_count][50];
    for(i=0,j=0,k=0;string[i];i++,k++)
    {
        if(string[i]!=' ')
            s[j][k]=string[i];
        else
        {
            s[j][k]='\0';    
            j++;
            k=-1;
        }
    }
    s[j][k]='\0';
    string[0]='\0';
    for(j=word_count-1;j>=0;j--)
    {
        if(string[0]!='\0')
            strcat(string," ");
        strcat(string,s[j]);
    }
    string[strlen(string)]='\0';
    return string;
}
int casein_comparison(char s1[],char s2[])
{
    int i;
    trim(s1);
    trim(s2);
    for(i=0;s1[i];i++)
    {
        if(s1[i]>=97&&s1[i]<=122)
            s1[i]-=32;
    }
    for(i=0;s2[i];i++)
    {
        if(s2[i]>=97&&s2[i]<=122)
            s2[i]-=32;
    }
    for(i=0;s1[i]&&s2[i];i++)
        if(s1[i]!=s2[i])
            return 0;
    if(s1[i]==s2[i])
        return 1;
    else
        return 0;
}
void print_frequency(char string[])
{
    int i;
    int f[128]={0};
    for(i=0;string[i];i++)
        f[string[i]]++;
    for(i=0;i<128;i++)
        if(f[i]!=0)
            printf("%c - %d\n",i,f[i]);
}
int find_word(char string[],char word[])
{
    int l=strlen(word),i,j;
    for(i=0;string[i+l-1];i++)
    {
        for(j=0;word[j];j++)
        {
            if(string[i+j]!=word[j])
                break;
        }
        if(!word[j])
            if(i==0 && (string[i+j]==' '||string[i+j]=='\0')||string[i-1]==' '&&(string[i+l]==' '|| string[i+l]=='\0'))
                return i;
    }
    return -1;
}
char* capatalize(char string[])
{
    int i=0;
    if(string[i]>=97&&string[i]<=122)
                string[i]=string[i]-32;
    for(i=1;string[i];i++)
    {
        if(string[i]==' ')
            if(string[i+1]>=97&&string[i+1]<=122)
                string[i+1]=string[i+1]-32;
    }
    return string;
}
char* acronym(char string [])
{
    int i,j,k,word_count;
    word_count=count_words(string);
    char s[word_count][50];
    for(i=0,j=0,k=0;string[i];i++,k++)
    {
        if(string[i]!=' ')
            s[j][k]=string[i];
        else
        {
            s[j][k]='\0';    
            j++;
            k=-1;
        }
    }
    s[j][k]='\0';
    string[0]='\0';
    for(k=1,i=0;k<word_count;k++,i++)
    {
        string[i]=s[k-1][0];
        if(string[i]>=97&&string[i]<=122)
            string[i]-=32;
        i++;
        string[i]=' ';
    }
    strcpy(string+i,s[word_count-1]);
    return string;
}
char* concatenate(char string1[],char string2[])
{
    int i,j;
    for(i=0;string1[i];i++);
    for(j=0;string2[j];j++)
        string1[i+j]=string2[j];
    string1[i+j]='\0';
    return string1;
}
int main()
{
    int i;
    char str1[]="Rohit Kumar Mahaur";
        
    return 0;
}