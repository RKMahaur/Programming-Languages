//Write a program to find the number of vowels in each of the 5 strings stored in two dimensional arrays, taken from the user.
#include<stdio.h>
#include<string.h>
void inputstring();
int vowel_count(char string[]);

void inputstring(char string[][50],int n)
{
    int i;
    printf("Pleae enter %d Lines : ",n);
    for(i=0;i<n;i++)
    {
        fgets(string[i],50,stdin);
        string[i][strlen(string[i])-1]='\0';
    }
    printf("\nString is inputed.");
}
int vowel_count(char string[])
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
int main()
{
    int i;
    char str[5][50];

    inputstring(str,5);
    for(i=0;i<=4;i++)
        printf("\n%s - vowels = %d\n",str[i],vowel_count(str[i]));
    return 0;
}