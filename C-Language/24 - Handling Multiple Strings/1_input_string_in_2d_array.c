//Write a function to store strings, taken from user, to the given 2d char array.
#include<stdio.h>
#include<string.h>
void inputstring();

void inputstring()
{
    int i,n;
    printf("Please enter the rows in the strings to input : ");
    scanf("%d",&n);
    fflush(stdin);

    char str[n][50];
    printf("Please enter %d Lines : ",n);
    for(i=0;i<n;i++)
    {
        fgets(str[i],50,stdin);
        str[i][strlen(str[i])-1]='\0';
    }
    for(i=0;i<n;i++)
        printf("%s\n",str[i]);
}
int main()
{
    inputstring();
    return 0;
}
