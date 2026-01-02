//Write a program to print size of and int, a float, a char, and a double type variable.
#include<stdio.h>
int main()
{
    int a;
    float b;
    char ch;
    double d;
    printf("Size of int variable : %d\n",sizeof(a));
    printf("Size of float variable : %d\n",sizeof(b));
    printf("Size of char variable : %d\n",sizeof(ch));
    printf("Size of double variable : %d",sizeof(d));
    return 0;
}