//Program to insert an element an element at any position
#include<stdio.h>
int main(void)
{
    int a[100],i,n,pos,num;
    printf("\nProgram created by Shreya Gupta\n");
    printf("Enter size of array:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter array elements[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("The array elements are:\n");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    printf("\n");

    printf("Enter the position:");
    scanf("%d",&pos);
    printf("Enter the number to be inserted:");
    scanf("%d",&num);
    for(i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=num;
    n++;
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    return 0;
}
