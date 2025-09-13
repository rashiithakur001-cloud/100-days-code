//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
int main() {
    int a, b;
    
    printf("Enter the two numbers\n");
    scanf("%d %d", &a, &b);
    
    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", a + b, a - b, a * b, a / b);
    
    return 0;
}