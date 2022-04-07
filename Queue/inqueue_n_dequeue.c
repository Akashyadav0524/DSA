#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int size;
    int f; //-->front
    int r; //-->rear
    int *arr;
};
int isFull(struct Queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct Queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}
void Enqueue(struct Queue *q, int val)
{
    if (isFull(q))
    {
        printf("Queue is OVERFLOW");
    }
    else
    {
        q->r = q->r + 1;
        q->arr[q->r] = val;
    }
}

int Dequeue(struct Queue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("Queue is Empty");
    }

    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}
int main()
{
    struct Queue q;
    q.size = 3;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));

    Enqueue(&q, 12);
    Enqueue(&q, 15);
    Enqueue(&q, 19);
    printf("Dqueing elment %d\n", Dequeue(&q));
    printf("Dqueing elment %d\n", Dequeue(&q));
    printf("Dqueing elment %d\n", Dequeue(&q));

    if (isEmpty(&q))
    {
        printf("Queue is empty\n");
    }
    if (isFull(&q))
    {
        printf("Queue is full\n");
    }
    return 0;
}