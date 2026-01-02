//Write a program to count vowels in a given string.
#include<stdio.h>
int main()
{
    char str[20],v[]="aeiouAEIOU";
    int i,j,count=0;
    printf("Enter the string : ");
    fgets(str,20,stdin);
    for(i=0;str[i];i++);
    str[i-1]='\0';
    
    for(i=0;str[i];i++)
    {
        for(j=0;v[j];j++)
        {
            if(str[i]==v[j])
            {
                count++;
                break;
            }
        }
    }
    printf("Vowel in %s is %d.",str,count);
    return 0;
}