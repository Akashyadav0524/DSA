#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, int val)
{

    if (isFull(ptr))
    {
        printf("Stack overflow can not push %d to stack/n,val");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("\n\nStack is creatrerd sucessfully\n");

    printf("before pushing,Full: %d\n", isFull(sp));
    printf("before pushing,Empty: %d\n", isEmpty(sp));

    push(sp, 56);
    push(sp, 576);
    push(sp, 6);
    push(sp, 56);
    push(sp, 56);
    push(sp, 87);
    push(sp, 546);
    push(sp, 56);
    push(sp, 56);
    push(sp, 456);

    printf("After pushing,Full: %d\n", isFull(sp));
    printf("After pushing,Empty: %d\n", isEmpty(sp));

    printf("%d\n", isEmpty(sp));
    printf("%d\n", isFull(sp));

    return 0;
}
