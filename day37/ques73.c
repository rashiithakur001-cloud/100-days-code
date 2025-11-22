//Find the sum of each row of a matrix and store it in an array.
#include<stdio.h>
int main(){
  int row , columb;
 printf("Enter the number of rows: ");       //no of rows in array
    scanf("%d",&row);
 printf("Enter the number of columbs: ");    //no of columbs in array
    scanf("%d",&columb);
  int arr[row][columb];
 for(int i = 0 ; i < row ; i++){          // store values in array 
   for(int j = 0 ; j < columb ; j++){
    printf("Enter the value: ");
      scanf("%d",&arr[i][j]);
  }
 }
int row_sum[row];
for(int i = 0 ; i < row ; i++){      // sum all the row values
int sum = 0;
 for(int j = 0 ; j < columb ; j++){
   sum += arr[i][j];
 }
   row_sum[i] = sum;
 }
 for(int i = 0 ; i < row ; i++){    // printing all row values stored in an array
     printf("%d ",row_sum[i]);
 }
 return 0;
}                         