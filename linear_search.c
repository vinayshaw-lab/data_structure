#include<stdio.h>
#include<stdlib.h>
void linear_search(int a[],int data,int n);
int Binary_search(int a[],int data,int n);

void linear_search(int a[],int data,int n)
{
    for(int i=0;i<n;i++)
    {
     if(a[i]==data)
     {
         printf("Enter data at %d index\n *****************************\n",i);
         break;
     }
     if(i==n)
     {
         printf("Enter data not found\n");
     }
    }

}

int Binary_search(int a[],int data,int n)
{
    int l=0,r=n-1,mid;
    while(l<=r)
    {
       mid=(l+r)/2;
        if(a[mid]==data)
            return mid;
        if(a[mid]<data)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }

    }
     return -1;
}
int main()
{
    while(1)
    {


    int i,n=10,data,ch,result;
    int a[10]={0,1,2,3,4,5,6,7,8,9};
    printf("1.Linear_search\n2.Binary_search\n");
    printf("Enter choice:\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: printf("Enter data want to search\n");
                scanf("%d",&data);
                linear_search(a,data,n);
        break;
        case 2: printf("Enter data want to search\n");
                scanf("%d",&data);
                result= Binary_search(a,data,n);
                (result == -1) ? printf("Element is not present in array\n") : printf("Element is present at index %d\n",result);

        break;
        case 3: exit(1);
        break;
        default :printf("Invalid choice\n*******************************\n ");

    }
    }
}
