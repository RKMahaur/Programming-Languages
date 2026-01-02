//1.Define a function to input variable length string and store it in an array without memory wastage.
//2.Write a program to ask the user to input a number of data values he would like to enter then create 
//  an array dynamically to accommodate the data values. Now take the input from the user and display the average of data values.
//3.Write a program to calculate the sum of n numbers entered by the user using malloc and free.
//4.Write a function to merge two array elements and store it in dynamically created array. 
//  Return address of this dynamically created array.
//5.Define a structure Student with name, roll number and college name as members. 
//  Define another structure Team with two Student type variables as members.
//6.In question 5, define a method to dynamically create a Student type variable and initialise with the values received in the arguments. 
//  Return address of Student type variable.
//7.In question 5, define a method to dynamically create Team variable, initialise it with the received arguments.
//  Return address of the Team variable.
//8.In question 5, define a method to display data of Student type, also define a method to display data of Team type.
//9.In question 5, define a method to dynamically create an array of pointers of type Student. Array size is received as an argument. 
//  Return the address of array.
//10.In question 5, define a method to dynamically create an array of pointers of type Team. Array size is received as an argument.
//   Return the address of array.
//11.In question 5, define a driver function to create 6 Students and 3 Teams. Form teams by assigning two students in each team.
//   At last display the list of teams with students in them.

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

void f1();
char* input_string();
void f2();
void f3();
void f4();
int* merge(int a[],int size1,int b[],int size2);
struct student* newstudent(char n[],int r,char c[]);
struct Team* newTeam(struct student x, struct student y);
void displayStudent(struct student s);
void displayTeam(struct Team t);
struct student** createStudentArray(int size);
struct Team** createTeamArray(int size);
void driverFunction();


void f1()
{
    char *ptr=NULL;
    ptr=input_string();
    printf("%s",ptr);
    printf("\n");
}
char* input_string()
{
    char ch,*p=NULL,*q=NULL;
    int i,size=1;
    printf("Enter text : ");
    p=(char*)malloc(size);
    p[0]='\0';
    while(1)
    {
        ch=getchar();
        if(ch=='\n')
            break;
        q=(char*)malloc(size+1);
        for(i=0;i<size;i++)
            q[i]=p[i];
        q[i-1]=ch;
        q[i]='\0';
        free(p);
        size++;
        p=(char*)malloc(size);
        strcpy(p,q);
        free(q);
    }
    return p;
}
void f2()
{
    int *p,size,i,s=0;
    float avg;
    printf("How many values you want to enter ");
    scanf("%d",&size);
    p=(int*)malloc(sizeof(int)*size);
    printf("Enter %d numbers",size);
    for(i=0;i<size;i++)
        scanf("%d",p+i);
    for(i=0;i<size;i++)
        s=s+p[i];
    avg=(float)s/size;
    printf("Average is %f",avg);
}
void f3()
{
    int *p,size,i,s=0;
    printf("How many values you want to enter ");
    scanf("%d",&size);
    p=(int*)malloc(sizeof(int)*size);
    printf("Enter %d numbers",size);
    for(i=0;i<size;i++)
        scanf("%d",p+i);
    for(i=0;i<size;i++)
        s=s+p[i];
    printf("Sum is %d",s);
    free(p);
}
void f4()
{
    int a[]={10,12,15,18,25,37};
    int b[]={8,11,13,21,24};
    int *p,i;
    p=merge(a,6,b,5);
    for(i=0;i<11;i++)
        printf("%d  ",p[i]);
}
int* merge(int a[],int size1,int b[],int size2)
{
    int i,j,k;
    int *c;
    c=(int*)calloc(size1+size2,sizeof(int));
    for(i=0,j=0,k=0;i<size1&&j<size2;k++)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=b[j];
            j++;
        }
    }
    while(i<size1)
    {
        c[k]=a[i];
        k++;
        i++;
    }
    while(j<size2)
    {
        c[k]=b[j];
        k++;
        j++;
    }
    return c;
}
struct student
{
    char name[20];
    int rollno;
    char college[40];
};
struct Team 
{
    struct student s1;
    struct student s2;
};
struct student* newstudent(char n[],int r,char c[])
{
    struct student *p;
    p=(struct student*)malloc(sizeof(struct student));
    strcpy(p->name,n);
    p->rollno=r;
    strcpy(p->college,c);
    return p;
};
struct Team* newTeam(struct student x, struct student y)
{
    struct Team *p;
    p=(struct Team*)malloc(sizeof(struct Team));
    p->s1=x;
    p->s2=y;
    return p;
}
void displayStudent(struct student s)
{
    printf("\n%s\n%d\n%s\n",s.name,s.rollno,s.college);
}
void displayTeam(struct Team t)
{
    printf("\nTeam:\n");
    displayStudent(t.s1);
    displayStudent(t.s2);
}
struct student** createStudentArray(int size)
{
    struct student **ptr;
    ptr=(struct student**)malloc(size*sizeof(struct student*));
    return ptr;
}
struct Team** createTeamArray(int size)
{
    struct Team **ptr;
    ptr=(struct Team**)malloc(size*sizeof(struct Team*));
    return ptr;
}
void driverFunction()
{
    char n[6][10]={"Aman","Sandeep","Bhavna","Vishal","Blesson","Divaker"};
    int i,r[6]={100,105,108,112,114,115};
    char c[6][10]={"NITT","NITK","MANIT","MNNIT","NITD","NITJ"};
    struct student **sptr;
    struct Team **tptr;
    sptr=createStudentArray(6);
    tptr=createTeamArray(3);
    for(i=0;i<=5;i++)
        sptr[i]=newstudent(n[i],r[i],c[i]);
    tptr[0]=newTeam(*sptr[0],*sptr[2]);
    tptr[1]=newTeam(*sptr[4],*sptr[1]);
    tptr[2]=newTeam(*sptr[3],*sptr[5]);
    for(i=0;i<=2;i++)
        displayTeam(*tptr[i]);
}
int main()
{
    driverFunction();
    printf("\n");
    return 0;
}
