//Find the transpose of a matrix.

#include<stdio.h>
int main(){
int row , column;
 printf("Enter the number of rows: ");       //no of rows
    scanf("%d",&row);
 printf("Enter the number of columns: ");    //no of columns 
    scanf("%d",&column);
 int array[row][column];
 for(int i = 0 ; i < row ; i++){          //store values in array
   for(int j = 0 ; j < column ; j++){
     printf("Enter the value: ");
      scanf("%d",&array[i][j]);
 }
   }
for(int i = 0 ; i < column ; i++){      // print transpose of the original matrix
 for(int j = 0 ; j < row ; j++){
 printf("%d ",array[j][i]);      // row replaced with column and column replaced with row 
}
    printf("\n");     //next line
  }
return 0;
 }
