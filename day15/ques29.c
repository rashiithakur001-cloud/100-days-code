//Write a program to calculate the factorial of a number.
#include<stdio.h>
int main(){
    int n;
    long long fact = 1; 
   printf("Enter a number: ");
    scanf("%d", &n);
   if (n < 0) {
    printf("not defined for negative numbers.\n");
    } else {
      for (int i = 1; i <= n; i++) {
      fact *= i;
    }
     printf("%lld\n", fact);
    }
   return 0;
}