#include<stdio.h>
int partition(int a[],int lb,int ub);
void print(int a[],int n);
void swap(int a[], int b, int c);
void Quick_sort(int a[],int lb,int ub);

void Quick_sort(int a[],int lb,int ub)
    {

        if(lb<ub)
    {
    int loc;
    loc=partition(a,lb,ub);
    Quick_sort(a,lb,loc-1);
    Quick_sort(a,loc+1,ub);
    }
    }

int partition(int a[],int lb,int ub)
{
    int start,end,pivot;
    pivot=a[lb];
    start=lb;
    end=ub;
    while(start<end)
    {
        while(a[start]<=pivot)
        {
            start++;
        }
        while(a[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            swap(a,start,end);
        }
    }
    swap(a,lb,end);
    return end;
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
    int lb=0,loc;
    int a[5]={1,2,9,8,7};
    int ub=sizeof(a)/sizeof(a[0]);
    Quick_sort(a,lb,ub);
    print(a,5);
}

