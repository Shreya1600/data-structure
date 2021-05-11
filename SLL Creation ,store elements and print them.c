#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    struct node
    {
        int info;
        struct node *link;
    };
    struct node *start=NULL,*ptr,*temp;
    int n,i;

    printf("Program created by Shreya Gupta\n");
    printf("Enter the number of elements stored in Singly Linked List:\n");
    scanf("%d",&n);
    i=0;
    while(i<n)
    {
        ptr=malloc(sizeof(struct node));
        if(ptr==NULL)
        {
            printf("Memory overflow\n");
            exit(0);
        }
        else{
            printf("Enter elements of node %d:",i+1);
            scanf("%d",&ptr->info);
            ptr->link=NULL;
            if(start==NULL){
                start=ptr;
                temp=start;
            }
            else
            {
                temp->link=ptr;
                temp=temp->link;
            }
        }
        i=i+1;
    }
    temp=start;
    printf("The elements of Singly Linked List:\n");
    while(temp!=NULL)
    {
        printf("%d\t",temp->info);
        temp=temp->link;
    }
    getch();
}
