#include <stdio.h>
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
        printf("Stack is empty");
    }
    else
    {
         printf("Stack is not empty");
    }
} 
 
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        printf("stack is full");
    }
    else
    {
       printf("stack is not full");
    }
}
 
int main()
{
    // struct stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int *) malloc(s.size * sizeof(int));
 
    struct stack *s;
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
 
    return 0;
}
