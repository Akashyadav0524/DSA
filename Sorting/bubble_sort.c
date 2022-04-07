#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[10], index, i, temp, isSorted = 0;
    printf("Enter the number of Elment :\n");
    scanf("%d", &index);

    printf("\nEnter the Element :\n");
    for (i = 0; i < index; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < index; i++)
    {

        printf("Working on pass number %d\n", i + 1);
        isSorted = 1;

        for (int j = 0; j < index - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            break;
        }
    }

    printf("\nSorted array will be:\n");
    for (i = 0; i < index; i++)
        printf("[|%d|]", arr[i]);

    return 0;
}