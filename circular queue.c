#include<stdio.h>
#include<stdlib.h>
#define CAP 5
void insert(int ele);
void Delete();
void display();
int f=-1,r=-1;
int ele,cq[];
int main()
{
    int ch;
    while(1)
    {
        printf("\n Circular Queue\n");
        printf(" 1.Insert \n 2.Delete \n 3.Display \n");
        printf("Enter choice\n");
        scanf("%d",&ch);
        switch(ch)
        {

            case 1:
                printf("Enter element \n");
                scanf("%d",&ele);
                insert(ele);
            break;
            case 2:
                Delete();
                break;
            case 3:
                display();
                break;

            default:printf("Invalid choice");
                break;

        }
    }
}
void insert(int ele)
{
    if(f==r+1 || r==CAP-1)
    {
        printf("Queue is full\n");
    }
    else if(f==-1 && r==-1)
    {
        f=r=0;
        cq[r]=ele;
    }
    else if(r==CAP-1)
    {
        r=0;
        cq[r]=ele;
    }
    else
    {
        r++;
        cq[r]=ele;
    }
}
void Delete()
{
    if(f==-1 && r==-1)
    {
        printf("Queue is full\n");
    }
    else if(f==r)
    {
        ele=cq[f];
        f=r=-1;
    }
    else if(f==CAP-1)
    {
       ele=cq[f];
       f=0;
    }
    else
    {
        ele=cq[f];
        f++;
    }
}
void display()
{
   if(f == -1)
      printf("\nCircular Queue is Empty!!!\n");
   else{
      int i = f;
      printf("\nCircular Queue Elements are : \n");
      if(f <= r){
	 while(i <= r)
	    printf("%d\t",cq[i++]);
      }
      else{
	 while(i <= CAP - 1)
	    printf("%d\t", cq[i++]);
	 i = 0;
	 while(i <= r)
	    printf("%d\t",cq[i++]);
      }
   }
}
