#include<stdio.h>

void main()
{
    int arr[10];
    int it,i,f,n;
    printf(" CHOOSE THE SIZE OF THE ARRAY WITHIN 10\n");
    scanf("%d",&n);
    printf("ENTER THE NUMBERS\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("ENTER THE NUMBER TO BE SEARCHED");
    scanf("%d",&it);
    f=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==it)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        if(i==0)
        {
            printf("\nTHE NUMBER IS PRESENT\nSINCE THE POSITION OF THE NUMBER IS %d\nBEST CASE\n",i+1);
        }
        else if(i==n-1)
        {
            printf("\nTHE NUMBER IS PRESENT\nSINCE THE POSITION OF THE NUMBER IS %d\nWORST CASE\n",i+1);
        }
        else
            printf("\nTHE NUMBER IS PRESENT\nSINCE THE POSITION OF THE NUMBER IS %d\nAVERAGE CASE\n",i+1);
    }
    else
        printf("\nTHE NUMBER IS NOT PRESENT");
}
