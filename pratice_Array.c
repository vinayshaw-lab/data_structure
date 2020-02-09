//Array using function
#include<stdio.h>
#include<stdlib.h>
int fun(int n);
void print(int a[],int n);
int fun(int n)
{
    int *p;
    p=(int*)malloc(n*sizeof(int));
    return(p);
}
void print(int a[],int n)
{

 for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
int main()
{
    int*a,i,n;
    printf("Enter range of Array");
    scanf("%d",&n);
    a=fun(n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);


    }

    print(a,n);
}
