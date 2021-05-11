#include<stdio.h>
void TOH(int ndisk,char source,char temp,char dest);
int main(void)
{
    char source='A',temp='B',dest='C';
    int ndisk;
 printf("Enter number of disks:");
 scanf("%d",&ndisk);
 printf("Sequence is:\n");
 TOH(ndisk,source,temp,dest);
 return 0;
}
void TOH(int ndisk,char source,char temp,char dest)
{
    if(ndisk==1)
    {
       printf("Move disk %d from %c-->%c\n",ndisk,source,dest);
       return;
    }
     TOH(ndisk-1,source,dest,temp);
        printf("Move disk %d from %c-->%c\n",ndisk,source,dest);
        TOH(ndisk-1,temp,source,dest);
}

