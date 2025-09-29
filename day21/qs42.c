//write a program to checj if a number is a perfect number.
#include <stdio.h>
int main() {
int num, sum = 0;
int i;
 printf("Enter the number");
    scanf("%d", &num);
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
     }
    if (sum == num)
        printf("Perfect number\n");
    else
        printf("Not a perfect number\n");
return 0;
}