//1.Define a structure Employee with member variables id,name,salary.
//2.Write a function to take input employee data from the user. [Refer structure from question 1]
//3.Write a function to display employee data. [ Refer structure from question 1]
//4.Write a function to find the highest salary employee from a given array of 10 employees. [Refer structure from question 1]
//5.Write a function to sort employees according to their salaries. [refer structure from question 1]
//6.Write a function to sort employees according to their names. [refer structure from question 1]
//7.Write a program to calculate the difference between two time periods.
//8.Write a program to store information of 10 students and display them using structure.
//9.Write a program to store information of n students and display them using structure.
//10.Write a program to enter the marks of 5 students in Chemistry, Mathematics and Physics(each out of 100)
//   using a structure named Marks having elements roll no.. name, chem_marks, maths_marks and phy_marks and 
//   then display the percentage of each student.
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
struct Employee
{
    int id;
    char name[50];
    float salary;
};
struct Employee input_struct_variable()
{
    struct Employee E;
    printf("Enter the id, name and salary of the  Employee : ");
    scanf("%d",&E.id);
    fflush(stdin);
    fgets(E.name,50,stdin);
    E.name[strlen(E.name)-1]='\0';
    scanf("%f",&E.salary);
    return E;
}
void display_struct_variable(struct Employee E)
{
    printf("\nEmployee id : %d",E.id);
    printf("\nName of Employee : %s",E.name);
    printf("\nSalary of Employee : %f",E.salary);
}
int highest_salary(struct Employee e[],int n)
{
    int i,index=0;
    struct Employee emp;
    emp=e[0];
    for(i=1;i<=n-1;i++)
    {
        if(e[i].salary>emp.salary)
        {
            emp=e[i];
            index=i;
        }
    }
    return index;
}
void sortbysalary(struct Employee e[],int n)
{
    int i,index;
    struct Employee temp;
    for(i=n-1;i>0;i--)
    {
        index=highest_salary(e,i+1);
        temp=e[i];
        e[i]=e[index];
        e[index]=temp;
    }
}
void sortbynames(struct Employee E[],int n)
{
    int i,l;
    struct Employee temp;
    for(l=1;l<n-1;l++)
    {
        for(i=0;i<n-1-l;i++)
        {
            if(strcmp(E[i].name,E[i+1].name)>0)
            {
                temp=E[i];
                E[i]=E[i+1];
                E[i+1]=temp;
            }
        }
    }
}
struct time 
{
    int hr,min,sec;
};
struct time difference(struct time t1,struct time t2)
{
    struct time temp;
    int seconds=abs((t1.hr*3600+t1.min*60+t1.sec)-(t2.hr*3600+t2.min*60+t2.sec));
    temp.hr=seconds/3600;
    seconds=seconds%3600;
    temp.min=seconds/60;
    temp.sec=seconds%60;
    return temp;
}
struct student
{
    int rollno;
    char name[20];
};
struct student inputstudent()
{
    struct student s;
    printf("\nEnter Student roll number and names : ");
    scanf("%d",&s.rollno);
    fflush(stdin);
    fgets(s.name,20,stdin);
    s.name[strlen(s.name)-1]='\0';
    return s;
}
void displaystudent(struct student s)
{
    printf("%d  %s",s.rollno,s.name);
}
void inputstudentarray(struct student s[],int n)
{
    int i;
    for(i=0;i<n;i++)
        s[i]=inputstudent();
}
void displaystudentarray(struct student s[],int n)
{
    int i;
    for(i=0;i<n;i++)
        displaystudent(s[i]);
}
struct marks
{
    struct student stu;
    int chem_marks,maths_marks,phy_marks;
};
struct marks setmarks(struct student s,int c, int m, int p)
{
    struct marks m1;
    m1.stu=s;
    m1.chem_marks=c;
    m1.maths_marks=m;
    m1.phy_marks=p;
    return m1;
}
void printpercentage(struct marks m)
{
    float per;
    per=(m.chem_marks+m.maths_marks+m.phy_marks)/3.0;
    printf("\n%d %s Percentage = %2f",m.stu.rollno,m.stu.name,per);
}
int main()
{
    struct student s[10];
    inputstudentarray(s,10);
    displaystudentarray(s,10);
    printf("\n\n");
    struct marks m[5];
    m[0]=setmarks(s[0],71,89,60);
    m[1]=setmarks(s[1],71,89,60);
    m[2]=setmarks(s[2],71,89,60);
    m[3]=setmarks(s[3],71,89,60);
    m[4]=setmarks(s[4],71,89,60);
    int i;
    for(i=0;i<=4;i++)
        printpercentage(m[i]);
    printf("\n");
    return 0;
}
