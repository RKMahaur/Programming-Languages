/*Write a program to take time as an input in below given format and covert the time format and display the result as given below.
User input date format - "HH:MM"
Output format - "HH hour and MM Minute"*/
#include<stdio.h>
void main()
{
    int hr,min;
    printf("Enter time (HH:MM) : ");
    scanf("%d:%d",&hr,&min);
    printf("%d hour and %d Minute",hr,min);
    return 0;
}