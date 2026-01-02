/*Write a menu driven program with the following options:
1.Factorial of a number
2. Check Even and Odd
3. Area of Circle
4. Sum of first N natural numbers
5. Exit*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice,num,i,fact=1,r,sum=0,j;
    float area;
    printf("1.Factorial of a number");
    printf("\n2.Check Even or Odd");
    printf("\n3.Area of circle");
    printf("\n4.Sum of first N natural numbers");
    printf("\n5.Exit");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("Enter the number for factorial : ");
            scanf("%d",&num);
            for(i=1;i<=num;i++)
                fact=fact*i;
            printf("%d is factorial of %d",fact,num);
            break;
        case 2:
            printf("Enter the no. for even or odd : ");
            scanf("%d",&num);
            if(num%2)
                printf("odd number.");
            else
                printf("even number.");
            break;
        case 3:
            printf("Enter the radius");
            scanf("%d",&r);
            area=3.14*r*r;
            printf("Area of circle having radius %d is %d",r,area);
            break;
        case 4:
            printf("Enter the number for sum of natural no. : ");
            scanf("%d",&num);
            for(j=1;j<=num;j++)
                sum=sum+j;
            printf("Sum of natural no. till %d is %d.",num,sum);
            break;
        case 5:
            printf("You are Exitted.");
            exit (0);
        default:
            printf("Wrong choice.");
    }
    return 0;
}