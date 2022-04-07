#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};
typedef struct node *nptr;

nptr Head, h, n;

void display(void);
//-----------------------------------

void main()
{
	int i;

	for (;;) //infinite loop like while(1){}
	{
		printf("\n\n Enter the data [-999 to stop] :: ");
		scanf("%d", &i);
		if (i == -999)
		{
			break;
		}

		if (Head == NULL)
		{
			Head = h = (nptr)malloc(sizeof(struct node));
			Head->data = i;
			Head->next = NULL;
		}
		else //create other nodes
		{
			n = (nptr)malloc(sizeof(struct node));
			n->data = i;
			n->next = NULL;
			h->next = n;
			h = n;
		}
	}

	display(); //display the data of the linked list
	printf("\n\n * * * END OF THE PROGRAM * * * ");
}
//----------------------------------------------------

void display()
{
	printf("\n\n Data of the linked list are as follows :: \n\n ");

	for (h = Head; h != NULL; h = h->next)
	{
		printf("  [%d]", h->data);
	}
}