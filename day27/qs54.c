/*Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *          */
#include <stdio.h>
int main() {
    int i, j, space;
    int n = 4; 
    for (i = 1; i <= n; i++) {   // spaces
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {   //stars
            printf("*");
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--) {
        for (space = 1; space <= n - i; space++) {     // sapces
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {          //stars
            printf("*");
        }
        printf("\n");
    }

    return 0;
}