//Add two matrices.

#include<stdio.h>
int main(){
int row , column;
  printf("Enter the number of rows for first matrix: ");       //no of rows in first array
    scanf("%d",&row);
  printf("Enter the number of columbs for first matrix: ");    //no of columns in first array
    scanf("%d",&column);
 int array[row][column];
  for(int i = 0 ; i < row ; i++){          //store the values in array 
     for(int j = 0 ; j < column ; j++){
  printf("Enter the value: ");
    scanf("%d",&array[i][j]);
 }
    }
int row1 , column1;
  printf("Enter the number of rows for second matrix: ");       //no of rows in sec array
    scanf("%d",&row1);
  printf("Enter the number of columbs for second matrix: ");    //no of columns in sec array
    scanf("%d",&column1);
 int array1[row1][column1];
 for(int i = 0 ; i < row1 ; i++){          //store the values in array 
   for(int j = 0 ; j < column1 ; j++){
    printf("Enter the value: ");
     scanf("%d",&array1[i][j]);
 }
    }
int arr[row][column];   //new array to store the sum values
    int temp = 0;
if(row == row1 && column == column1){            // if both metrix parameter are same then only it will execute
  for(int i = 0 ; i < row ;i++){                 //to sum the values 
    for(int j = 0 ; j < column ;j++){
       arr[i][j] = array[i][j] + array1[i][j];
} 
   }
     temp = 1;
 }
 if(temp == 1){
    for(int i = 0 ; i < row ; i++){       // print all the sum values 
     for(int j = 0 ; j < column ; j++){
    printf("%d ",arr[i][j]);
 }
    printf("\n");   } //nest line
 }
  else{
      printf("Enter the same parameters for both the arrays!!\n");   //executes only if both array parameters are not same 
    }
 return 0;
}                          