#include<stdio.h>
#include<stdlib.h>
void display();
void append();
struct node
{
    int data;
    struct node* right;
    struct node* left;

};
struct node *root=NULL;

void main()
{
    int ch;
    while(1)
   {

    printf("\nLinked list\n");
    printf(" 1.Append \n 2.Add_at_begin \n 3.Add_at_any_place\n 4.Delete\n 5.Length\n 6.Display\n 7.Quit\n\n");
    printf("Enter your choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
        int l;
        case 1:append();
        break;
       /* case 2:addatbegin();
        break;
        case 3:addatanyplace();
        break;
        //case 4:Delete();
        case 5:
            l=length();
            printf("Length of linked list is %d",l);
            break;
*/        case 2:display();
        break;
        case 3:exit(1);
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
    temp->right=NULL;
    temp->left=NULL;
    if(root==NULL)
    {
      root=temp;
    }
    else
    {
        struct node *p;
        p=root;
        while(p->right!=NULL)
        {
           p=p->right;

        }
             p->right=temp;
             temp->left=root;

    }

}
void display()
{
    struct node* temp;
    temp=root;
    if(root==NULL)
       {
           printf("No node is present");
       }
        else
        {
    while(temp!=NULL)
    {
       printf("%d->",temp->data);
       temp=temp->right;
    }
}
}
