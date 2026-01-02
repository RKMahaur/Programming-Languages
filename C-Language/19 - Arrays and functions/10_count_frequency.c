//Write a function to count the frequency of each element of an array.
void count_frequency(int A[],int size)
{
    int i,j;
    sort(A,size);
    i=0;
    j=1;

    while(i<=size-2)
    {
        printf("%d ",A[i]);
        while(A[i]==A[j])
            j++;
        printf("- %d\n",j-i);
        i=j;
        j=j+1;
    }
}