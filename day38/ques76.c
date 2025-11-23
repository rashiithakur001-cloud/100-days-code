//Check if a matrix is symmetric.
#include<stdio.h>
int main(){
int row , column;
printf("Enter the number of rows for matrix: ");       //no of rows in array
 scanf("%d",&row);
printf("Enter the number of columbs for matrix: ");    //no of columns in array
 scanf("%d",&column);
int arr[row][column];
 for(int i = 0 ; i < row ; i++){          // store the values 
    for(int j = 0 ; j < column ; j++){
      printf("Enter the value: ");
      scanf("%d",&arr[i][j]); }
}
 int trans[row][column];       //made new array to store transposed values
 for(int i = 0 ; i < row ; i++){      // transpose the matrix
    for(int j = 0 ; j < column ; j++){
   trans[i][j] = arr[j][i];
 }
  }
 int output = 1;
 for(int i = 0 ; i < row ; i++){              // to check if the enter matrix is symmetric
   for(int j = 0 ; j < column ; j++){        
 if(trans[i][j] != arr[i][j]){
   output = 0;
  break;
 }
   }
 }
if(output == 1){              //only executes if the matrix is symmetric 
    printf("TRUE");  
 }
   else{
 printf("FALSE");    //exected if the matrix is not matrix
   }
   return 0;
}                              