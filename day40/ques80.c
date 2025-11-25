//Multiply two matrices.
#include <stdio.h>
int main() {
 int a[10][10], b[10][10], res[10][10], r1, c1, r2, c2, i, j, k;
  printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);
  printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);
 if(c1 != r2){                                               // Check if multiplication is possible
    printf("Multiplication of matrix is not possible.\n");
    return 0;
 }
 printf("Enter elements of first matrix:\n");     // elements for first matrix
    for(i = 0; i < r1; i++){
     for(j = 0; j < c1; j++){
      scanf("%d", &a[i][j]);
    }
 }
 printf("Enter elements of second matrix:\n");    //elements for second matrix
    for(i = 0; i < r2; i++){
     for(j = 0; j < c2; j++){
       scanf("%d", &b[i][j]);
     }
 }
   for(i = 0; i < r1; i++){         // Initialize elements of result matrix to 0
     for(j = 0; j < c2; j++){
    res[i][j] = 0;
     }
  }
   for(i = 0; i < r1; i++){          // Multiply matrices a & b and store in result
     for(j = 0; j < c2; j++){
       for(k = 0; k < c1; k++){
     res[i][j] += a[i][k] * b[k][j];
   }
     }
  }
 printf("Output Matrix:\n");     
   for(i = 0; i < r1; i++){
     for(j = 0; j < c2; j++){
   printf("%d ", res[i][j]);
   }
    printf("\n");    //next line
}
return 0;
}            