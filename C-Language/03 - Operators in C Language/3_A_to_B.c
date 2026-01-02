//Write a program with one char type variable. Assign 'A' in the variable. Now change the value of variable from 'A' to 'b' using increment operator.
#include<stdio.h>
int main()
{
    char ch='A';
    ch++;
    printf("New value of ch is %c",ch);
    return 0;
}