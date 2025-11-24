//Check if the elements on the diagonal of a matrix are distinct.

#include<stdio.h>
int main(){
 int n;
 printf("Enter the number of rows and column you want in a square matrix: ");       
    scanf("%d",&n);
int array[n][n];
 for(int i = 0 ; i < n ; i++){          // store the values in array 
   for(int j = 0 ; j < n ; j++){
     printf("Enter the value: ");
      scanf("%d",&array[i][j]);
 } }
int maindig[n];
int secdig[n];
int all[n*2];
for(int i = 0 ; i < n ; i++){      // to pick main diagnol values
        maindig[i] = array[i][i]; }
 for(int i = 0 ; i < n ; i++){                //to pick second diagnols from matrix
        secdig[i] = array[i][n - 1 - i]; }
 for(int i = 0 ; i < n ; i++){              // store main diagnol in new array
        all[i] = maindig[i];}
 for(int i = n ; i < n*2 ; i++){           // store second diagnol values in new array
        all[i] = secdig[i-n];
    }
 int result = 1;
  for(int i = 0 ; i < n*2 ; i++){                     // comapare all values to confirm  its a distinct matrix 
    for(int j = i+1 ; j < n*2 ; j++){
     if(all[i] == all[j]){
     result = 0;
     break;
  }
}
 if(!result){
      break;
     }
  }
     if(result == 1){
        printf("TRUE");   
   }
    else{
        printf("FALSE");    
    }
 return 0;
}                         