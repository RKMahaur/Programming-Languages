//Write a function to merge two arrays of the same size sorted in descending order.
void merge(int A[],int B[],int size,int C[])
{
    int i=0,j=0,k=0;
    
    while(i<=size-1&&j<=size-1)
    {
        if(A[i]>B[j])
        {
            C[k]=A[i];
            i++;
        }
        else
        {
            C[k]=B[j];
            j++;
        }
        k++;
    }
    if(i==size)
    {
        while(j<=size-1)
        {
            C[k]=B[j];
            k++;
            j++;
        }
    }
    else 
    {
        while(i<=size-1)
        {
            C[k]=A[i];
            k++;
            i++;
        }
    }
    
}