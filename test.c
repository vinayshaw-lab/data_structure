#include<stdio.h>
#include<stdlib.h>
void display();
void append();
void reverse();
int length();
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

    printf("\nLinked list\n");
    printf(" 1.Append \n 2.Display\n 3.Reverse \n 4.length\n\n");
    printf("Enter your choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
        int l;
        case 1:append();
        break;
        case 2:display();
        break;
        case 3:
        reverse();

        break;
        case 4:l=length();
        printf("%d\n",l);
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
        while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->link;
    }

    }
    }
void reverse()
{
    int i,j,k,len;
    len=length();
    i=0;
    j=len-1;
    struct node *p,*q;
   p=root;
   q=root;
   while(i<j)
   {
 struct node* temp;
       k=0;
       while(k<j)
       {
           q=q->link;
           k++;
       }
       temp=p->link;
       p->link=q->link;
       q->link=temp;
       i++, j--;
       p=p->link;










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
