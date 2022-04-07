#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;          // 2 byte
    struct node *next; //2 byte
};
typedef struct node *nptr;

nptr Head, h, n;

void display(void);
void insert_beg(int i); //function prototype
void insert_end(int i);

//-----------------------------------

void main()
{
    int i;
    //clrscr();
    for (;;) //while(1){}
    {
        printf("\n\n Enter the data [-999 to stop] :: ");
        scanf("%d", &i);
        if (i == -999)
        {
            break;
        }
        //create the header node
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

    display();

    printf("\n\n Enter the data to insert at the begining :: ");
    scanf("%d", &i);
    insert_beg(i); //finction calling
    printf("\n\n Data of the linked list after insertion at the begining :: ");
    display();

    printf("\n\n Enter the data to insert at the end :: ");
    scanf("%d", &i);

    insert_end(i);
    printf("\n\n Data of the linked list after insertion at the end :: ");
    display();

    printf("\n\n * * * END OF THE PROGRAM * * * ");
    getch();
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
//---------------------------------------------------

void insert_beg(int i)
{
    nptr temp;
    temp = (nptr)malloc(sizeof(struct node));
    temp->data = i;
    temp->next = Head;
    Head = temp;
}
//---------------------------------------------------

void insert_end(i)
{
    nptr temp;
    for (h = Head; h->next != NULL; h = h->next)
    {
    }

    temp = (nptr)malloc(sizeof(struct node));
    temp->data = i;
    h->next = temp;

}