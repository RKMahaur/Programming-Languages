/*Write a menu driven program with the following options:
1.Addition
2.Subtraction
3.Multiplication
4.Division
5.Exit*/

#include<stdio.h>
int main()
{
    float a,b,c;
    int m;
    printf("Enter two digits : ");
    scanf("%f %f",&a,&b);
    L1:
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n");
    scanf("%d",&m);
    switch(m)
    {
        case 1:
            printf("Addition of %.2f and %.2f is %.2f.",a,b,a+b);
            break;
        case 2:
            printf("Subtraction of %.2f and %.2f is %.2f.",a,b,a-b);
            break;
        case 3:
            printf("Multiplication of %.2f and %.2f is %.2f.",a,b,a*b);
            break;
        case 4:
            c=a/b;
            printf("Division of %.2f and %.2f is %.2f.",a,b,c);
            break;
        case 5:
            printf("You are Exitted.");
            break;
        default:
            printf("You entered wrong choice.");
            goto L1;
    }
    return 0;
}