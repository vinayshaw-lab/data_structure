//Stack
#include<stdio.h>
#include<stdlib.h>
#define CAP 5
void push(int);
int pop(void);
void peek(void);
void display(void);
int stack[CAP],top=-1;

int main()
{
    int item,ch;
while(1)
  {
   printf("1 For Push     \n");//Enter element form

   printf("2 For Pop     \n");//Delete top of element
   printf("3 For Peek     \n");//return the top of element
   printf("4 For Display  \n");//For display total element
   printf("5 For Quit     \n\n");//For exit from program
    printf("Enter your choice : ");
    scanf("%d",&ch);
    printf("\n");
switch(ch)
    {
        case 1:
            printf("Enter element : ");
            scanf("%d",&item);
            push(item);
            break;
        case 2:
            item=pop();
            if(item==0)
            {
                printf("Stack is empty\n") ;
            }
            else
            {
                printf("popped item : %d\n",item);
            }
             break;
        case 3:
            peek();
            break;
        case 4:
            display();
             break;
        case 5:
            exit(0);
             break;
        default :
             printf("You enter wrong choice\n");
    }
  }
}
void push(int ele)
{
    if(top==CAP-1)
    {
        printf("Stack is full\n");
    }
    else
    {
     top++;
     stack[top]=ele;
     printf("%d is pushed \n\n",ele);
    }
}
int pop()
{
    if(top==-1)
    {
        return 0;
    }
    else
    {
         return stack[top--];
    }
}
void peek()
{
    if(top==-1)
    {
         printf("Stack is empty\n") ;
    }
         else
         {
             printf("Peek element : %d",stack[top]);
             printf("\n");
         }
}
void display()
{
    if(top==-1)
    {
        printf("Stack is empty\n") ;
    }
    else
    {
        int i;
        printf("Stack element are : \n");
        for(i=0;i<=top;i++)
        {
            printf("%d\t",stack[i]);
        }
        printf("\n");
    }
}


