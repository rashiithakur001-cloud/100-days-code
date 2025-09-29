//Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int num, temp, first, last, digits, power = 1, middle, swapped;
   printf("Enter the number: ");
    scanf("%d", &num);
    temp = num;
    for (digits = 0; temp > 0; digits++) {
        temp /= 10;
    }
    for (int i = 1; i < digits; i++) {
        power *= 10;
    }

    first = num / power;      // first digit
    last = num % 10;          // last digit
    middle = (num % power) / 10;  // middle part

    swapped = last * power + middle * 10 + first;

    printf("new number after swapping: %d\n", swapped);

    return 0;
}
