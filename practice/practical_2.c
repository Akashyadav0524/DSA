#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

void linkedlistTraversl(struct Node *ptr,struct Node *rtr)
{
      printf("\nfront traversal\n");
    while (ptr != NULL)
    {

        printf("\nElement: %d", ptr->data);
        ptr = ptr->next;
    }
    printf("\nReverse traversal\n");
    struct Node *prtr = rtr;
    while (prtr!=NULL)
    {
        printf("\nElement :%d",prtr->data);
        prtr = prtr->prev;
    }

}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 4;
    head->next = second;
    head->prev = NULL;

    second->data = 3;
    second->next = third;
    second->prev = head;

    third->data = 6;
    third->next = fourth;
    third->prev = second;

    fourth->data = 1;
    fourth->next = NULL;
    fourth->prev = third;

    linkedlistTraversl(head,fourth);

    return 0;
}