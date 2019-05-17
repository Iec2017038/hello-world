/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
    //insertion at end
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
     printf("ELEMENTS IN LINKED LIST IS: ");
    while(temp!=NULL)
    {
       printf("%d ",temp->data) ;
       temp=temp->ptr;
    }
    
  //  printf("Hello World");
    //insertion at start
    choice=1;
    while(choice==1)
    { 
        
        temp=(Node *)malloc(sizeof(Node));
        printf("enter data\n");
        scanf("%d",&temp->data);
        temp->ptr=head;
        head=temp;
        printf("press 1 to continue: ");
        scanf("%d",&choice);
    }
    temp=head;
    printf("insertion at start: ");
    while(temp->ptr!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->ptr;
    }
    return 0;
}

