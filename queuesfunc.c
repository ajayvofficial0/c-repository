#include<stdio.h>
int arr[10],n,rear=-1,top=0;
void enqueue(int n){
    if(rear==10){

     printf("queue overflow\n");
    }
    else{
        rear++;
        arr[rear]=n;
    }
}

void dequeue(){
    if (rear==-1){
     printf("queue underflow\n");
    }
    else{
        
        printf("the dequeued element is %d\n",arr[top]);
        top++;
    }
}

void front(){
    printf("the number of elements in the queue are%d\n",rear+1);
}

void show(){
    for(int i=top;i<=rear;i++){
        printf("%d\n",arr[i]);
        
    }
}




int  main(){
    int choice,z=0;
    while (z==0){
    printf("1.enqueue\n2.dequeue\n3.front\n4.show\n");
    scanf("%d",&choice);
    
        switch(choice){

        case 1:
         printf("enter the element u wish to add");
         scanf("%d",&n);
         enqueue(n);
         break;

        case 2:
         dequeue();
         break;

        case 3:
         front();
         break;

        case 4:
           show();
           break;
        

        default:
         printf("invalid choice");
}
       printf("enter:\n0.continue\n1.exit ");
       scanf("%d",&z);
}
return 0;
}