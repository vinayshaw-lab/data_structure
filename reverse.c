//Implement a singly list and print in reverse oder
#include<stdio.h>
#include<stdlib.h>
void display();
void append();
int length();
void reverse();
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

    printf("Linked list\n");
    printf(" 1.Append \n 2.Reverse\n 3.Display\n 4.Quit\n\n");
    printf("Enter your choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
        int l;
        case 1:append();
        break;
        case 2:reverse();
        printf("Reverse done");
        break;
        case 3:display();
        break;
        case 4:exit(1);
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
        root==temp;
    }
    else
    {
        struct node *p;
        p=root;
        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link=temp;

    }
}

int length()
{

    struct node *temp;
    int count;
    temp=root;
    while(temp!=NULL)
    {
        count++;
        temp=temp->link;
    }
    return count;
}

void reverse()
{
    int i,j,k,len;
    len=length();
    i=0;
    j=len-1;
    struct node *p,*q,*temp;
   p=root;
   q=root;
   while(i<j)
   {
       k=0;
       while(k<j)
       {
           q=q->link;
           k++;
       }
       temp=p->data;
       p->data=q->data;
       q->data=temp;
       i++, j--;


       q=root;



   }
}

void display()
{
    struct node *temp;
    temp=root;
    if(temp==NULL)
    {
        printf("No nodes in the list\n");

    }
    else
    {
        while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->link;
    }

    }
    }
