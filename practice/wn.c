#include <stdio.h>
#include <stdlib.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", A[i]);
    }
    printf("\n");
}

void quickSort(int A[],int low,int high)
{
    int partitionIndex;
    if(low<high)
    {
        partitionIndex=partiton(A,low,high);
        quickSort(A,low,partitionIndex-1);
        quickSort(A,partitionIndex+1,high);
    }
}

int partiton(int A[],int low,int high)
{
    int pivot=A[low];
    int i=low +1;
    int j=high;
    int temp;

    do
    {
        while(A[i]<=pivot)
        {
            i++;
        }
        while(A[j]>pivot)
        {
            j--;
        }
        
        if (i<j)
        {
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;

        }
    } while (i<j);
    temp=A[low];
    A[low]=A[j];
    A[j]=temp;
    return j;
    
}

int main()
{
    int A[]={3,6,47,3,9,6,};
    int n=6;
    printArray(A,n);
    quickSort(A,0,n-1);
    printArray(A,n);

    return 0;
}