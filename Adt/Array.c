#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//my custom array craeation

struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
};

void caeatArary(struct myArray *a, int tSize, int uSize)

{
    (*a).total_size = tSize;
    (*a).used_size = tSize;
    (*a).ptr = (int *)malloc(tSize * sizeof(int));
}

void setVal(struct  myArray *a)
{
    int n;
    for (int i = 0; i < a->used_size; i++)

    {
        printf("Enter the Elment %d", i);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}
//abhi git use karo


int main()
{
    struct myArray marks;
    caeatArary(&marks, 10, 2);
    printf("We RAre Running Set value now\n");
    setVal(&marks);
    printf("We RAre Running show now\n");
    Show(&marks);

    return 0;
}
