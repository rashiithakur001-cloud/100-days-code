//Write a program to check if a number is a strong number.
#include<stdio.h>
int main() {
 int num, temp, rem, fact; 
  int sum = 0;
   printf("Enter the number");
    scanf("%d", &num);
   temp = num;
    while (temp > 0) {
        rem = temp % 10;
        fact = 1;
        for (int i = 1; i <= rem; i++) {
            fact = fact * i;
        }

        sum = sum + fact;  
        temp = temp / 10;
    }
    if (sum == num)
        printf("Number is strong number\n");
    else
        printf("Number is not strong number\n");

    return 0;
}