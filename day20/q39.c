// Write a program to find the product of odd digits of a number.
#include<stdio.h>
int main(){
    int num,digit;
    long long product = 1; 
    int Odd = 0;         // to check if any odd digit exists
    printf("Enter the number:");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10; 
        if (digit % 2 == 1) {
            product *= digit;
           Odd = 1;
        }
        num /= 10;    
    }
    if (Odd)
        printf("%lld\n", product);
    else
        printf("No odd digits\n"); 
  return 0;
}
