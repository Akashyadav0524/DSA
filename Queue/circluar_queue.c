#include <stdio.h>
#include <stdlib.h>

struct CircularQueue
{
    int size;
    int f; //-->front
    int r; //-->rear
    int *arr;
};
int isFull(struct CircularQueue *q)
{
    if ((q->r + 1) % q->size == q->f)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct CircularQueue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}
void Enqueue(struct CircularQueue *q, int val)
{
    if (isFull(q))
    {
        printf("Queue is Full\n");
    }
    else
    {
        printf("ENQUEUED Element :%d\n", val);
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = val;
    }
}

int Dequeue(struct CircularQueue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("Queue is Empty\n");
    }

    else
    {
        q->f = (q->f + 1) % q->size;
        a = q->arr[q->f];
    }
    return a;
}
int main()
{
    struct CircularQueue q;
    q.size = 5;
    q.f = q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));

    Enqueue(&q, 12);
    Enqueue(&q, 15);
    Enqueue(&q, 19);
    printf("Dqueing elment %d\n", Dequeue(&q));
    printf("Dqueing elment %d\n", Dequeue(&q));
    printf("Dqueing elment %d\n", Dequeue(&q));
    Enqueue(&q, 45);
    Enqueue(&q, 45);
    Enqueue(&q, 45);
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