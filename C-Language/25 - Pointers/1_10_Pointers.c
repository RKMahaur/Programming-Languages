//1.Write a function to swap values of two int variables.(TSRN)
//2.Write a function to search all occurence of a given character in a given string. Result of search is a list of indices 
//  to be stored in the given array.[void search_all_occurences(char *str,char ch,int *arr);]
//3.Write a function to convert a given string into uppercase.
//4.Write a function to convert a given string into lowercase.
//5.Write a function to extract a substring from  a given string with specified start index(inclusive) and end index(exclusive),
//  and store the extracted string in another char array.[void extract_string(char *str,int start_index,int end_index,char *result);]
//6.Write a function to swap strings of two char arrays.
//7.Write a function to sort an array of int type values.[void sort(int *ptr,int size);]
//8.Write a function to merge two arrays in a given array.[void merge(int *arr1,int size1,int *arr2,int size2,int *arr3);]
//9.Write a function to move first value of the array to the position where all smaller values will be in the left and greater 
//  values will be in the right.
//10.There are five classes with different number of students in them. Five arrays containing marks of students of each class.
//   Write a function to recieve an address of an array of pointers to access marks of the all the students. The job of function is to
//   find the highest marks among all the classes.
#include<stdio.h>
#include<string.h>
void swap(int *,int *);
void search_all_occurences(char *str,char ch,int *arr);
char* uppercase(char *str);
char* lowercase(char *str);
void extract_string(char *str,int start_index,int end_index,char *result);
void swap_string(char* str1,char *str2);
void sort(int *ptr,int size);
char* merge(int *arr1,int size1,int *arr2,int size2,int *arr3);
int place_element(int a[],int n);
int highestmarks(int **ptr,int n,int size[]);
void f10();

void swap(int *p,int *q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;
}
void search_all_occurences(char *str,char ch,int *arr)
{
    int i,k;
    for(i=0,k=0;str[i];i++)
    {
        if(str[i]==ch)
        {
            arr[k]=i;
            k++;
        }
    }
}
char* uppercase(char *str)
{
    int i;
    for(i=0;str[i];i++)
        if(str[i]>='a'&&str[i]<='z')
            str[i]=str[i]-32;
    return str;
}
char* lowercase(char *str)
{
    int i;
    for(i=0;str[i];i++)
        if(str[i]>='A'&&str[i]<='Z')
            str[i]=str[i]+32;
    return str;
}
void extract_string(char *str,int start_index,int end_index,char *result)
{
    int i;
    for(i=start_index;i<end_index;i++)
        result[i-start_index]=str[i];
    result[end_index-start_index]='\0';
}
void swap_string(char* str1,char *str2)
{
    char temp[50];
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
}
void sort(int *ptr,int size)
{
    int i,j,temp;
    for(j=1;j<size;j++)
    {
        for(i=0;i<=size-1-j;i++)
        {
            if(ptr[i]>ptr[i+1])
            {
                temp=ptr[i];
                ptr[i]=ptr[i+1];
                ptr[i+1]=temp;
            }
        }
    }
}
char* merge(int *arr1,int size1,int *arr2,int size2,int *arr3)
{
    int i,j,k;
    for(i=0,j=0,k=0;i<size1&&j<size2;k++)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            i++;
        }
        else
        {
            arr3[k]=arr2[j];
            j++;
        }
    }
    while(i<size1)
    {
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    while(j<size2)
    {
        arr3[k]=arr2[j];
        k++;
        j++;
    }
    /*Another method
    int i;
    sort(arr1,size1);
    sort(arr2,size2);
    for(i=0;i<size1;i++)
        arr3[i]=arr1[i];
    for(i=0;i<size2;i++)
        arr3[size1+i]=arr2[i];
    sort(arr3,size1+size2);
    return arr3;
    */
}
int place_element(int a[],int n)
{
    int left=0,temp;
    int loc=0;
    int right=n-1;
    while(left<right)
    {
        while(left<right&&a[loc]<=a[right])
            right--;
        if(left==right)
            break;
        temp=a[loc];
        a[loc]=a[right];
        a[right]=temp;
        loc=right;

        while(left<right&&a[left]<a[loc])
            left++;
        if(left==right)
            break;
        temp=a[left];
        a[left]=a[loc];
        a[loc]=temp;
        loc=left;
    }
    return loc;
}
int highestmarks(int **ptr,int n,int size[])
{
    int i,j,max;
    max=ptr[0][0];
    for(i=0;i<n;i++)
    {
        for(j=0;j<size[i];j++)
        {
            if(max<ptr[i][j])
                max=ptr[i][j];
        }
    }
    return max;
}
void f10()
{
    int a[]={23,67,89,11,23,42,59,16,8,81};
    int b[]={44,77,88,22,11};
    int c[]={50,70,20,30,90,60,80};
    int d[]={3,6,9,1,0};
    int e[]={81,75,50,63,40,49,77,86};
    int *p[5],size[]={10,5,7,5,8};
    int hmarks;
    p[0]=a;
    p[1]=b;
    p[2]=c;
    p[3]=d;
    p[4]=e;
    hmarks=highestmarks(p,5,size);
    printf("Highest marks: %d",hmarks);
}
int main()
{ 
    f10();
    return 0;
}