//Program to insert an element in array at the end
#include<stdio.h>
int main(void)
{
    int a[10],n,i,end;
    printf("Program created by Shreya Gupta\n");
    printf("Enter size of array:");
    scanf("%d",&n);
     for(i=0;i<n;i++)
    {
        printf("Enter array elements[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("\nThe array elements are:\n");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    printf("\nEnter number at end:");
    scanf("%d",&end);

    a[n]=end;
    n++;
    printf("\nElements after insertion:");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    return 0;
}

