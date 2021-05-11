//Program to store 10 elements in an array and perform searching by Binary Search
#include<stdio.h>
#define MAX 50
int BinarySearch(int a[],int size,int item);
int main(void)
{
    int i,size,item,a[MAX],index;
    printf("Enter size of array:");
    scanf("%d",&size);

    printf("Enter the elements of array(in sorted order):\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the item to be searched:");
    scanf("%d",&item);
    index=BinarySearch(a,size,item);

    if(index==-1)
        printf("%d not found in array\n",item);
    else
        printf("%d found at position %d\n",item,index+1);
}
int BinarySearch(int a[],int size,int item)
{
    int l=0,r=size-1,mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(item>a[mid])
            l=mid+1;
        else if(item<a[mid])
            r=mid-1;
        else
            return mid;
    }
    return -1;
}
