//Queue PUSH/POP/DELETE
#include<stdio.h>
#include<stdlib.h>
#define CAP 5
void Delete();
void display();
void insert();
int f=0,r=0,q[CAP];
int main()
{
    int ch;
    while(1)
{


    printf("\nQueues\n");
    printf(" 1.Insert \n 2.Display \n 3.Delete \n 4.Quit \n");
    printf("Enter your choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:insert();
        break;
        case 2:display();
        break;
        case 3:Delete();
        break;
        case 4:exit(1);
        break;
        default :printf("Invalid choice\n");
    }
}
}

void insert()
{
    if((CAP-1)==r)
    {
        printf("Queue is full");
    }
    else
    {
        int ele;
        printf("Enter element\n");
        scanf("%d",&ele);
        q[r]=ele;
        r++;
    }
}

void display()
{
    if(f==r)
    {
        printf("Queue is empty\n");
    }
    else
    {
        int i;
        printf("Elements are\n");
        for(i=f;i<r;i++)
        {
            printf("%d \t",q[i]);
        }
    }
}
void Delete()
{

    if(f==r)
    {
        printf("Queue is empty\n");
    }
    else
    {
        int i;
        printf("Delete element is %d\n",q[f]);
        for(i=0;i<(r-1);i++)
        {
            q[i]=q[i+1];
        }
        r--;
    }
}
