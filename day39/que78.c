//Find the sum of main diagonal elements for a square matrix.

#include<stdio.h>
int main(){
 int row , column;
  printf("Enter the number of rows for matrix: ");       //no of rows in array
    scanf("%d",&row);
  printf("Enter the number of columbs for matrix: ");    //no of column in array
    scanf("%d",&column);
 int arr[row][column];
  for(int i = 0 ; i < row ; i++){          // store the values in array
    for(int j = 0 ; j < column ; j++){
      printf("Enter the value: ");
       scanf("%d",&arr[i][j]);
  }
    }
int sum = 0;
 if(row == column){                     // check if the matrix is a sq. matrix
    for(int i = 0 ; i < row ; i++){       // sum all the main diagnol digits
      sum = sum + arr[i][i];
   }
    printf("The sum of main diagnol is: %d\n",sum);
   }
   else{
   printf("The row and column should be same (should be a sq. matrix)\n");   //printed if the matrix is not a  square matrix
   }
 return 0;
}                              