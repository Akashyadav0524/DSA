#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node* nptr;

nptr Head, h, n;

void dispaly(void);

void main()
{
    int i;
    for (;;)
    {
        printf("\n\n Enter thr data [-22 to stop ]:: ");
        scanf("%d", &i);
        if (i == -22)
        {
            break;
        }

        if (Head == NULL)
        {
            Head = h = (nptr)malloc(sizeof(struct node));
            Head->data = i;
            Head->next = NULL;
        }
        else
        {
          n = (nptr)malloc(sizeof(struct node));
            n->data = i;
            n->next = NULL;
            h->next = n;
            h = n;
        }
    }

    dispaly();
    printf("\n\n  End of the program  ");
}


void display()
{
    printf("\n\n Data of the linked list are as follows :: \n\n ");
	
	for(h=Head; h!=NULL; h=h->next)
	{
		printf("  [%d]",h->data);
	}
}
