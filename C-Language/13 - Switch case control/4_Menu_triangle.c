/*Write a menu driven program with the following options:
1. Check whether a given set of three numbers are lengths of an isosceles triangle or not.
2. Check whether a given set of three numbers are length of sides of a right angled triangle or not.
3. Check whether a given set of three numbers are equilateral triangle or not.
4. Exit
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,m;
    while(1)
    {
        printf("Enter sides of a valid triangle : ");
        scanf("%d %d %d",&a,&b,&c);
        if(a+b>c)
        {
            if(b+c>a)
            {
                if(a+c>b)
                {
                    printf("Valid Triangle\n");
                    break;
                }
                else
                    printf("Not a Valid Triangle\n");
            }
            else
                printf("Not a Valid Triangle\n");
        }
        else
            printf("Not a valid triangle\n");
    }
    while(1)
    {
    printf("\n1. Check whether a given set of three numbers are lengths of an isosceles triangle or not.");
    printf("\n2. Check whether a given set of three numbers are length of sides of a right angled triangle or not.");
    printf("\n3. Check whether a given set of three numbers are equilateral triangle or not.");
    printf("\n4.Exit");
    scanf("%d",&m);
    switch(m)
    {
        case 1:
            if(a==b || b==c || c==a)
                printf("Isosceles triangle");
            else    
                printf("Not isosceles triangle.");
            break;
        case 2:
            if(a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b)
                printf("Right angled triangle.");
            else
                printf("Not an right angled triangle.");
        case 3:
            if(a==b&&b==c&&a==c)
                printf("Equilateral triangle.");
            else
                printf("Not an equilateral triangle.");
        case 4:
            printf("You are Exitted.");
            exit (0);
        default:
            printf("You entered wrong choice.");
    }
    }
    return 0;
}