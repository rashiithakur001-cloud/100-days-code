//Write a program to find the sum of digits of a number.
#include <stdio.h>
int main() {
    int n, sum = 0, digit;
    printf("Enter the number");
    scanf("%d", &n);
    while(n > 0) {
     digit = n % 10;   // get last digit
     sum += digit;     // add it to sum
     n = n / 10;       // remove last digit
    }
  printf("%d", sum);
   return 0;
}