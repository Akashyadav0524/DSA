#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node* nptr;

Head, h, n;

void display(void);

void main()
{
    int i;
    for (;;)
    {
        printf("\n\nEnter the data -111 to stop");
        scanf("%d", &i);
        if (i == -111)
            ;
        {
            break;
        }
        if (Head == NULL)
        {
            Head = h = (struct node *)malloc(sizeof(struct node));
            Head->data = i;
            Head->next = NULL;
        }
        else
        {
            n = (struct node *)malloc(sizeof(struct node));
            n->data = i;
            n->next = NULL;
            h->next = n;
            h = n;
        }
    }

    display();
    printf("\n\n ****** END OF THE PROGRAMMM *****");
}

void display()
{
    printf("\n\n Data of the linked list are as follws     ::\n\n");
    for (h = Head; h != NULL; h = h->next)
    {
        printf("[%d]",h->data);
    }
}
