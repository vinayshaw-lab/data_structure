#include<stdio.h>
#include<stdlib.h>
void swap(int a[], int b, int c);
void bubble_sort(int a[],int n);
void print(int a[],int n);

void bubble_sort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
              {

               swap(a,j,j+1);
        }
    }

}
}

void swap(int a[], int b, int c)
 {
    int temp = a[b];
    a[b] = a[c];
    a[c] = temp;
}


void print(int a[],int n)
{
    printf("Element in sorted order:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}

int main()
{

 int a[10]={10,11,45,0,85,3,8,44,6,7};
    int n=sizeof(a)/sizeof(a[0]);
    bubble_sort(a,n);
    print(a,n);

}
