#include <stdio.h>
#include<stdlib.h>
struct node
 {
     int data;
     struct node *ptr;
 };
typedef struct node Node;
int main()
{ 
    Node *temp,*head,*last;
    int count=0,choice=1;
    while(choice==1)
    {
        temp=(Node *)malloc(sizeof(Node));
        printf("enter data\n");
        scanf("%d",&temp->data);
        if(count==0)
         {   
             head=last=temp;
         }
        else
         {
            last->ptr=temp;
            last=temp;
         }
         printf("for continue entry of data press :1\n");
         scanf("%d",&choice);
         count++;
    }
     last->ptr=NULL;
     temp=head;
    // printf("ELEMENTS IN LINKED LIST IS: ");
    printf("midlle el+")
     int i=0;
    while(1)
    {
       if(i==count/2)
         { printf("%d ",temp->data) ;
           break;
         }
         i++;
       temp=temp->ptr;
    }
  //  printf("Hello World");

    return 0;
}
