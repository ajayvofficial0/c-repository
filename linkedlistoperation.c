#include <stdio.h>
#include <stdlib.h>
int count=0;//this is for count function
struct node{
    int value;
    struct node *next;
}*head;

void addfirst(){                                           //adding in the first
    struct node *newnode=malloc(sizeof(struct node));
    int item;
    printf("enter the value");
    scanf("%d",&item);
    if(head==NULL){
    
    newnode->value=item;
    newnode->next=NULL;
    head=newnode;}
    else{
        newnode->value=item;
        newnode->next=head;
        head=newnode;
    }
    printf("item added in the first\n");
}

void addlast(){                                           //adding in the last
    struct node *newnode=malloc(sizeof(struct node));
    struct node *temp;
    
    int item;
    printf("enter the value");
    scanf("%d",&item);
    newnode->value=item;
    newnode->next=NULL;
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    printf("sucessfullly added in the end\n");
}

void addany(){                                         //inserting at a given position
    struct node *newnode=malloc(sizeof(struct node));
    struct node *temp;
    int pos,i=1;
    printf("enter the position");
    scanf("%d",&pos);
    
    if(pos>count)
      printf("invalid position");
    else{
        temp=head;
        while(i<pos){
            temp=temp->next;
            i++;
        }
    int item;
    printf("enter the value");
    scanf("%d",&item);

    newnode->value=item;
    newnode->next=temp->next;
    temp->next=newnode;
    }
}
//-------------------------------------------------------------------------
void display(){                                      //displaying the element list
    struct node *newnode;
    newnode=head;
    while(newnode!=NULL){
        printf("element:%d\n",newnode->value);
        newnode=newnode->next;
    }
}
//-------------------------------------------------------------------------
void removefirst(){                                 //removing the first element
    struct node *newnode;
    newnode=head;
    int item=head->value;
    head=head->next;
    free(newnode);
    printf("the removed element is %d\n",item);

}

void removelast(){                               //removing the last element
    struct node *prevnode;
    struct node *temp;
    temp=head;
    while (temp->next!=NULL){
        prevnode=temp;
        temp=temp->next;
}
   prevnode->next=NULL;
   free(temp);
}

void removeany(){                              //removing at a given position
    struct node *temp;
    struct node *nextnode;

    int pos,i=1;
    printf("enter the position u want to remove\n");
    scanf("%d",&pos);
    temp=head;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
    free(nextnode);
    printf("element sucessfully at %d position\n",pos);
}
//-------------------------------------------------------------------
void glength(){   
    count=0;                                      //count the length of linked list
    struct node *temp;
    temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
   }
//-------------------------------------------------------------------
void search(){
    count=0;
    struct node *temp;
temp=head;
int ele;
printf("enter the element u want to search");
scanf("%d",&ele);
while(temp!=NULL){
    count++;
    if(temp->value==ele)
     printf("the element is found at %d node",count);
    temp=temp->next;
    }
}
//--------------------------------------------------------------------
void main(){
    int choice;
    while(1){
    printf("enter choice:\n1first 2last 3any-add\n4first 5last 6any-remove\n7-display\n8-search\n9-exit");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        addfirst();
        glength();
        break;

        case 2:
        addlast();
        glength();
        break;                                    //i put glength function in every case to keep track of change in the node automatically

        case 3:
        addany();
        glength();
        break;

        case 4:
        removefirst();
        glength();
        break;

        case 5:
        removelast();
        glength();
        break;

        case 6:
        removeany();
        glength();
        break;

        case 7:
        display();
        glength();
        break;

        case 8:
        search();

        case 9:
        exit(0);

        default:
         printf("invalid input");
    }
    }
    }
