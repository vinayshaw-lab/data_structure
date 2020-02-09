#include<stdio.h>
#include<stdlib.h>
int length();
void addatbegin();
void append();
//void Delete();
void addatanyplace();
void display();
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
    printf(" 1.Append \n 2.Add_at_begin \n 3.Add_at_any_place\n 4.Delete\n 5.Length\n 6.Display\n 7.Quit\n\n");
    printf("Enter your choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
        int l;
        case 1:append();
        break;
        case 2:addatbegin();
        break;
        case 3:addatanyplace();
        break;
        //case 4:Delete();
        case 5:
            l=length();
            printf("Length of linked list is %d",l);
            break;
        case 6:display();
        break;
        case 7:exit(1);
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
    }
    else
    {
        temp->link=root;
        root=temp;
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

void addatanyplace()
{
  struct node *temp,*p;
  int loc,len,i=1;
  printf("Enter location : ");
  scanf("%d",&loc);
  len=length();
  if(loc>len)
  {
      printf("Invalid location\n");
      printf("Currently list you having %d nodes",len);

  }
  else
  {
      p=root;
      while(i<loc)
      {
          p=p->link;
          i++;
      }
       temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter node\n");
    scanf("%d",&temp->data);
    temp->link=NULL;
    temp->link=p->link;
    p->link=temp;

  }

}
/*
void Delete()
{


}
*/
