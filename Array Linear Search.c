//Program to store 10 elements in an array and perform linear searching
#include<stdio.h>
int main(void)
{
    int a[10],i,data;
    printf("Program created by Shreya Gupta\n");
    printf("Enter array elements:\n");
    for(i=0;i<10;i++)
    {

        scanf("%d",&a[i]);
    }
    printf("Enter the data to be searched:");
    scanf("%d",&data);
    for(i=0;i<10;i++)
    {
        if(a[i]==data)
        {
            printf("Element found at index:%d",i);
            break;
        }
    }
        if(i==10)
        {
            printf("Element not found");
        }

    return 0;
}
