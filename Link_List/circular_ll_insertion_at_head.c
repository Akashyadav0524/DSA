#include <stdlib.h>
#include <stdio.h>

struct node
{
    int data;
    struct node *next;
};

void linkedlisttrav(struct node *head)
{
    struct node *ptr = head;

    do
    {
        printf(" [%d][*]->", ptr->data);
        ptr = ptr->next;

    } while (ptr != head);
}

struct node *insertatFirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    struct node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }

    p->next = ptr;
    ptr->next = head;
    head = ptr;

    return head;
}

int main()
{

    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 2;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 4;
    third->next = fourth;

    fourth->data = 5;
    fourth->next = head;
    printf("\nCircular linklist before insertion\n");

    linkedlisttrav(head);
    printf("\n\n");
    head = insertatFirst(head, 7);
    printf("\nCircular linklist after insertion\n");

    linkedlisttrav(head);
    printf("\n\n");

    return 0;
}