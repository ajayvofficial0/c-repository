#include<stdio.h>                //this program is for size 10 stack if we want user defined size ,declare a size variable and 
int arr[10],n,rear=-1;                    //replace 10 with the variable

void push(int n){
    if(rear==10){
        printf("stack overflow\n");
    }
    else{
        rear++;
        arr[rear]=n;
    }  
}

void pop(){
    if(rear==-1){
        printf("stack underflow\n");
    }
    else{
        printf("the element popped is %d\n",arr[rear]);
        rear--;
    }
}

void front(){
    if(rear==-1)
    {
        printf("stack underflow empty top element\n");
    }
    printf("the top element is %d\n",arr[rear]);
}

void show(){
    printf("the stack is:\n");
    for(int i=0;i<=rear;i++){
       printf("%d",arr[i]);
    }
}


int main(){
int choice,z=0;
    while (z==0){
    printf("1.push\n2.pop\n3.front\n4.show\n");
    scanf("%d",&choice);
    
        switch(choice){

        case 1:
         printf("enter the element u wish to push:");
         scanf("%d",&n);
         push(n);
         break;

        case 2:
         pop();
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