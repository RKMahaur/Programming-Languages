//Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.
#include<stdio.h>
#include<string.h>
void inputstring(char [][50]);
void sort(char [][50], int);

void inputstring(char city[][50])
{
    int i;
   
    printf("Pleae enter 10 city names to be sorted : \n");
    for(i=0;i<10;i++)
    {
        fgets(city[i],50,stdin);
        city[i][strlen(city[i])-1]='\0';
    }
    printf("\nString is inputed.\n");
}
void sort(char city[][50], int n)
{
    int i,j;
    char temp[50];
    for(j=1;j<n;j++)
    {
        for(i=0;i<=n-1-j;i++)
        {
            if(strcmp(city[i],city[i+1])>0)
            {
                strcpy(temp,city[i]);
                strcpy(city[i],city[i+1]);
                strcpy(city[i+1],temp);
            }
        }
    }
}
int main()
{
    int i;
    char str[10][50];

    inputstring(str);
    sort(str,10);
    for(i=0;i<10;i++)
        printf("%s\n",str[i]);
    return 0;
}