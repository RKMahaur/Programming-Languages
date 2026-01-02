/*Write a menu driven program with the following option:
1. Calculate LCM of two numbers
2. Calculate sum of the digits of a number
3. Volume of a cuboid
4. Check whether a given number is prime or not
5. Exit*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice,a,b,LCM,num,sum=0,d,l,br,h,vol,i;
    printf("1. Calculate LCM of two numbers");
    printf("\n2. Calculate sum of the digits of a number");
    printf("\n3. volume of a cuboid");
    printf("\n4. Check whether a given number is prime or not");
    printf("\n5. Exit");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("Enter any two numbers for LCM : ");
            scanf("%d %d",&a,&b);
            for(LCM=a>b?a:b;LCM<=a*b;LCM++)
            {
                if(LCM%a==0 && LCM%b==0)
                {
                    printf("LCM of %d and %d is %d.",a,b,LCM);
                    break;
                }
            }
            break;
        case 2:
            printf("Enter the number for sum of digits :");
            scanf("%d",&num);
            for(;num;num=num/10)
            {
                d=num%10;
                sum=sum+d;
            }
            printf("Sum of digits in %d is %d.",num,sum);
            break;
        case 3:
            printf("Enter length,breadth,height of a cuboid.");
            scanf("%d%d%d",&l,&br,&h);
            vol=l*br*h;
            printf("volume of cuboid is %d.",vol);
            break;
        case 4:
            printf("Enter the number to check prime or not : ");
            scanf("%d",&num);
            for(i=2;i<num;i++)
            {
            if(num%i == 0)
                break;
            }
            if(i==num)
                printf("Prime number.");
            else
                printf("Non Prime.");
            break;
        case 5:
            printf("You are exitted.");
            exit(0);
        default:
            printf("You entered wrong choice.");
    }
    return 0;
}