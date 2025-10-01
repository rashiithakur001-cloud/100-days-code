//Write a program to print all the prime numbers from 1 to n.
#include <stdio.h>
#include <math.h>
int main() {
  int n;
printf("Enter a number 'n' upto  which you want to check: ");
 scanf("%d", &n);
printf("Prime numbers from 1 to %d are:\n", n);
 for (int i = 2; i <= n; i++) {
    int isprime = 1;  
 for (int j = 2; j <= sqrt(i); j++) {
     if (i % j == 0) {  
      isprime = 0;
      break;
  }
     }
 if (isprime) {
  printf("%d ", i);
  }
    }
 return 0;
}
