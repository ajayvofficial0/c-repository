#include<stdio.h>                //sudoku verification code
int main(){
    int a[9][9]={{9,5,7,6,1,3,2,8,4},
                 {4,8,3,2,5,7,1,9,6},
                 {6,1,2,8,4,9,5,3,7},
                 {1,7,8,3,6,4,9,5,2},
                 {5,2,4,9,7,1,3,6,8},
                 {3,6,9,5,2,8,7,4,1},
                 {8,4,5,7,9,2,6,1,3},
                 {2,9,1,4,3,6,8,7,5},
                 {7,3,6,1,8,5,4,2,9}};
    int i,j,n,sum=0,m,b,z=0,k=0;
    printf("enter choice for the time being take 9\n");     //taking choice for rows and columns
    scanf("%d",&n);


    // printf("enter the elements\n");
    // for(i=0;i<n;i++){ 
    //     int temp=0;
    //     for(j=0;j<n;j++){                 //taking user inputs
    //         scanf("%d",&a[i][j]);
    //         //temp=a[i][j];
    //         //printf("%d",temp);
    //         // if(temp<0 && temp>9){
    //         //   printf("the entered element is invalid,try again later");
    //         //   break;}

    //     }
    //     printf("\n");
    // }

    printf("the entered elements are:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){                         //displaying it for user verification
            printf("%d\t",a[i][j]);

        }
        printf("\n");
    }
//------------------------------------------------------------------------------------
for(i=0;i<n;i++){
    sum=0;
    for(j=0;j<n;j++){
        
        sum=sum+a[i][j];
                                     //rowcheck
        
    }
    //printf("%d",&sum);
    if(sum==45){                                  
      printf("row checking for %d row is done\n",i);}
    else{
      printf("row checking for %d row failed,some element is repeated\n",i);
      break;
    }
    }
//---------------------------------------------------------------------------------------

for(i=0;i<n;i++){
    sum=0;
    for(j=0;j<n;j++){
        
        sum=sum+a[j][i];                           //col check
        
    }
    if(sum==45){
     printf("col checking for %d col is done\n",i);
     continue;}
    else{
     printf("col checking for %d col failed,some element is repeated\n",i);
     break;
     }
}
//---------------------------------------------------------------------------------------
sum=0;                               //3x3 grid verification
printf("sum=%d",sum);                                              
for(m=0;m<n;m+=3){                   //row for whole matrix
    z=0;
    k++;
    
    for(b=0;b<n;b+=3){               //col for whole matrix
        
        z++;
        
        for(i=m;i<(3*k);i++){              //this is for row in a matrix for 3x3 cube
                                     
            for(j=b;j<(3*z);j++){
                //printf("%d",a[i][j]);    //this is for col in a matrix  for 3x3 cube
                sum+=a[i][j];
                printf("\nsum%d",sum);
                
                
            }
             
        } 
        
    } 
    }
    
    if(sum==405){
      printf("\n3x3 verfication done\n");
      printf("The sudoku solution you entered is verified and correct");
      return 1; }
      
    else{
        printf("invalid soln");
        return 0;
    }
}


