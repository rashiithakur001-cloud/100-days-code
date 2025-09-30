//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>
int main() {
 int n;
float sum = 0;
printf("Enter n terms: ");
scanf("%d", &n);
 for (int i = 1; i <= n; i++) 
 {
sum += (float)(2 * i) / (float)(4 * i - 1);
  }
 printf("Approx sum: %.2f\n", sum);
 return 0;
}