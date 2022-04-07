#include <stdio.h>
#include <stdlib.h>

int partion(int A[], int low, int high)
{
    int pivoit = A[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {
        while (A[i] <= pivoit)
        {
            i++;
        }
        while (A[j] > pivoit)
        {
            j--;
        }

        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    temp = A[low];
    A[low] = A[j];
    A[j] = temp;

    return j;
}

void pirntArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", A[i]);
    }
    printf("\n");
}

void Quicksort(int A[], int low, int high)
{
    int partionindex;
    if (low < high)
    {
        partionindex = partion(A, low, high);
        Quicksort(A, low, partionindex - 1);
        Quicksort(A, partionindex + 1, high);
    }
}
int main()
{
    int A[] = {2, 45, 7, 3, 8, 54, 1, 7};
    int n = 8;
    printf("\n****ARRAY BEFORE SORTING****\n");
    pirntArray(A, n);
    Quicksort(A, 0, n - 1);
    printf("\n****ARRAY AFTER SORTING****\n");
    pirntArray(A, n);
    return 0;
}