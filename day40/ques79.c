//Perform diagonal traversal of a matrix.
#include <stdio.h>
int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = 3;                                        // No. of rows and columns (for a sq. matrix)
for (int slice = 0; slice < 2 * n - 1; ++slice){        // Total number of diagonals is 2*n - 1 for an n x n matrix
 printf("Diagonal %d: ", slice + 1);
  int rowStart, colnStart;           // Determine the starting row and column for the current diagonal
 if (slice < n){          // Diagonals starting from the first row
 rowStart = 0;
 colnStart = slice;
 } 
   else{                        // Diagonals starting from the last column (or subsequent rows)
 rowStart = slice - n + 1;
 colnStart = n - 1;
 }
 int currentRow = rowStart;     // Traverse the current diagonal
  int currentCol = colnStart;
while (currentRow < n && currentCol >= 0) {
  printf("%d ", matrix[currentRow][currentCol]);
    currentRow++;
    currentCol--;
 }
   printf("\n");  //next line
  }
return 0;
}             