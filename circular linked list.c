//Circular linked list
#include<stdio.h>
#include<stdlib.h>
void append();
void display();
void addatbegin();
void at_at_last();
void delete_node();
void delete_last();
struct node
{
    int data;
    struct node *link;
};
struct node *root;

void main()
{
    int ch;
    while(1)
   {
    printf("\n");
    printf("Circular Linked list\n");
    printf(" 1.Append \n 2.Display\n 3.add_at_begin \n 4.at_at_last \n 5.Delete_first_node\n 6.delete_last \n 7.Quit\n\n");
    printf("Enter your choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
        int l;
        case 1:append();
        break;
       case 2:display();
        break;
        case 3:addatbegin();
        break;
        case 4:at_at_last();
        break;
        case 5:delete_node();
        break;
        case 6:exit(1);
        break;
        default : printf("Invalid choice");

    }
   }

}
void append()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter node\n");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(root==NULL)
    {
      root=temp;
      temp->link=root;
    }
    else
    {
        struct node *p;
        p=root;
        while(p->link!=root)
        {
           p=p->link;

        }
             p->link=temp;
             temp->link=root;
    }

}

void display()
{
     struct node *temp;
    temp=root;
    if(temp==NULL)
    {
        printf("No nodes in the list");

    }

    else
    {
        do
        {
            printf("%d->",temp->data);
            temp=temp->link;
        }while(temp!=root);
        printf("\n");
}
    }

void addatbegin()
{
      struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter node\n");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(root==NULL)
    {
      root=temp;
      temp->link=root;
    }
    else
    {
        struct node *p;
        p=root;
        while(p->link!=root)
        {
           p=p->link;

        }
        temp->link=root;
        p->link=temp;
        root=temp;
    }

}
void at_at_last()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter node\n");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(root==NULL)
    {
        root=temp;
        temp->link=root;
    }
    else
        {
        struct node*p;
        p=root;

    while(p->link!=root)
    {
        p=p->link;
    }
    p->link=temp;
    temp->link=root;

        }
}

void delete_node()
{
    struct node*p,*temp;
    p=root;
    while(p->link!=root)
    {
        p=p->link;
    }
    temp=root;
    root=root->link;
    p->link=root;
    temp->link=NULL;
    free(temp);

}
/*
void delete_last()
{
   struct node*p,*temp;
    p=root;
    while(p->link!=root)
    {
        p=p->link;
    }
    temp=root;
      while(temp->link!=p)
    {
        temp=temp->link;
    }
    p->link=NULL;
        temp->link=root;
        free(p);
}

*/


