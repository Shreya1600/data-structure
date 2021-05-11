//PROGRAM TO INSERT AN ELEMENT IN ARRAY AT BEGINNING
#include<stdio.h>
int main(void)
{
    int a[10],n,i,beg;
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
    printf("\nEnter number at beginning:");
    scanf("%d",&beg);
    for(i=n-1;i>=0;i--)
    {
        a[i+1]=a[i];
    }
    a[0]=beg;
    n++;
    printf("\nElements after insertion:");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    return 0;
}
