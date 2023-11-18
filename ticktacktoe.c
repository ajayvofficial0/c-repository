#include<stdio.h>  //this is a practice code it has a lot of loopholes and bugs 
#include<conio.h>

char board[]={'0','1','2','3','4','5','6','7','8','9'};

void printboard(){
       printf("welcome to tic tack toe\n");
       printf("      |        |     \n");
       printf("   %c  |   %c    |  %c  \n",board[1],board[2],board[3]);
       printf(" _____|________|_____\n");
       printf("      |        |     \n");
       printf("   %c  |   %c    |  %c  \n",board[4],board[5],board[6]);
       printf(" _____|________|_____\n");
       printf("      |        |     \n");
       printf("   %c  |   %c    |  %c  \n",board[7],board[8],board[9]);
       printf("      |        |     \n");
}


int checkwinning(){
  if(board[1]==board[2] && board[2]==board[3]){
        return 1;
    }
    if(board[1]==board[4] && board[4]==board[7]){
        return 1;
    }
    if(board[7]==board[8] && board[8]==board[9]){
        return 1;
    }
    if(board[3]==board[6] && board[6]==board[9]){
        return 1;
    }
    if(board[1]==board[5] && board[5]==board[9]){
        return 1;
    }
    if(board[3]==board[5] && board[5]==board[7]){
        return 1;
    }
    if(board[2]==board[5] && board[5]==board[8]){
        return 1;
    }
    if(board[4]==board[5] && board[5]==board[6]){
        return 1;
    }
  
  int count=0;
  for (int i=1;i<=9;i++){
    if(board[i]=='x'|| board[i]=='o'){
      count++;
    }
  }
  if(count==9){
    return 0;
  }
  return -1;

}



void main(){
    int player=1,input,status=-1;
    printboard();
    
    
    while(status=-1){
      player=(player%2==0)?2:1;
      char mark=(player==1)?'x':'o';
     printf("enter the place u want to enter player%d",player);
     scanf("%d",&input);
     if(input<1 || input>9){
       printf("invalid number");}

    
     

    board[input]=mark;
    printboard();

    int result=checkwinning();
    if(result==1){
      printf("player %d is the winner",player);
      return;
    }
    else if(result==0){
      printf("the game is a draw");
      return;}
    
    player++;
}
}



