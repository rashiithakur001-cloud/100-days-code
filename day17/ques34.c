//Write a program to check if a number is prime.
#include <stdio.h>
int main() {
int num, prime = 1;
 printf("Enter a number: ");
 scanf("%d", &num);
 if (num >= 0) {
   if (num <= 1) {
  prime = 0; 
  } else {
   for (int i = 2; i * i <= num; i++) {
     if (num % i == 0) {
     prime = 0;
     break;
    }
  }
 }
if (prime) {
 printf("%d is a prime number\n", num);
   } else {
 printf("%d is not a prime number\n", num);
 }
  }  else {
  printf("%d is a negative number\n", num);
 }
 return 0;
}