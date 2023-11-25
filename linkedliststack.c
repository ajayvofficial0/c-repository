#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;


//------------------------------------------------------
void push(){
    int value;
    struct node *ptr=malloc(sizeof(struct node));

    if(ptr==NULL)
      printf("stack overflow");
      
    else{
    printf("enter the value");
    scanf("%d",&value);

    if(head==NULL){
    ptr->data=value;   //adding data to a node
    ptr->next=NULL;    //if the head node is NULL node we have tag the address as NULL
    head=ptr;           //updating the rear by making head the ptr   
    }

    else{
    ptr->data=value;
    ptr->next=head;   
    head=ptr;
    }
    printf("item pushed sucessfully\n");
    }
}
//-------------------------------------------------------
void pop(){
  int item;
  struct node *ptr=head;
  if(ptr==NULL)
    printf("stack underflow");
  else
  item=head->data;
  head=head->next;
  free(ptr);
  printf("%d popped sucessfully\n",item);
}
//-------------------------------------------------------
void display(){
   
  
  struct node *ptr=head;
  if(ptr==NULL)
   printf("stack is empty\n");
  else{
   
   while(ptr!=NULL){
    printf("element: %d\n",ptr->data);
    ptr=ptr->next;
   } 
  }
}

void main(){
                            //menu driven program 
int choice;
while (1){
printf("1.push\n2.pop\n3.display\n4.exit\n");
scanf("%d",&choice);
switch(choice){
  case 1:
  push();
  break;

  case 2:
  pop();
  break;

  case 3:
  display();
  break;

  case 4:
   exit(0);
   break;
   
  default:
   printf("invalid choice");
  }
  }
}