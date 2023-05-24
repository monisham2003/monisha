/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
typedef struct node NODE;
NODE *creationofnode(int data)
{
    NODE*newnode=(NODE*)malloc(sizeof(NODE));
    newnode->data=data;
    newnode->next=NULL;
    newnode->prev=NULL;
    return newnode;
}
void insertion_at_begin(NODE **head,NODE **end,int data)
{
    NODE*newnode=creationofnode(data);
    if(*head==NULL&& *end==NULL)
    {
        *head=newnode;
        *end=newnode;
        return;
    }
    else
    {
        newnode->next=*head;
        (*head)->prev=newnode;
        *head=newnode;
        return;
    }
}
void forward_traversal(NODE*head)
{
    NODE*tptr;
    printf("Forward traversal->");
    for(tptr=head;tptr!=NULL;tptr=tptr->next)
    {
        printf("%d",tptr->data);
    }
}
 void backward_traversal(NODE*end)
{
    NODE*prev,*tptr;
    printf("backward traversal->");
    for(tptr=end;tptr!=NULL;tptr=tptr->prev)
    {
        printf("%d ",tptr->data);
    }
}
int main()
{
    NODE*head=NULL,*end=NULL;
    int data;
    while(1)
    {
        scanf("%d",&data);
        if(data==-1)
        break;
        insertion_at_begin(&head,&end,data);
    }
    forward_traversal(head);
    printf("\n");
    backward_traversal(end);
}

