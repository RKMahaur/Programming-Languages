//Write a function to remove duplictae names stored in the list of names stored in a 2d char array.
#include<stdio.h>
#include<string.h>
void inputstring(char [][20],int);
void sort(char [][20], int);
void remove_duplicate(char [][20],int);

void inputstring(char string[][20],int n)
{
    int i;
    printf("Please enter %d names to remove duplicate names in the 2d string : ",n);
    for(i=0;i<n;i++)
    {
        fgets(string[i],50,stdin);
        string[i][strlen(string[i])-1]='\0';
    }
    printf("String is inputed.");
}
void sort(char str[][20], int n)
{
    int i,j;
    char temp[50];
    for(j=1;j<n;j++)
    {
        for(i=0;i<=n-1-j;i++)
        {
            if(strcmp(str[i],str[i+1])==0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[i+1]);
                strcpy(str[i+1],temp);
            }
        }
    }
}
void remove_duplicate(char string[][20],int n)
{
    sort(string,n);
    int i;
    for(i=n-2;i>=0;i--)
        if(strcmp(string[i],string[i+1])==0)
            string[i+1][0]='\0';
    sort(string,n);
}
int main()
{
    int n,i;
    printf("Please enter the rows in the strings to input : ");
    scanf("%d",&n);
    fflush(stdin);
    char string[n][20];

    inputstring(string,n);
    remove_duplicate(string,n);
    for(i=0;i<n;i++)
        printf("%s\n",string[i]);
    return 0;
}
