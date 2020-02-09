#include<stdio.h>
void print(int a[],int n);
void insertion_sort(int a[],int n);

void insertion_sort(int a[],int n)
{
    int temp,i,j;
   for(i=1;i<n;i++)
   {
       temp=a[i];
       j=i-1;
       while(j>=0 && a[j]>temp)
       {
           a[j+1]=a[j];
           j--;
       }
       a[j+1]=temp;
   }

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

    int a[5]={1,4,2,3,5};
    int n=sizeof(a)/sizeof(a[0]);
    insertion_sort(a,n);
    print(a,n);
}
