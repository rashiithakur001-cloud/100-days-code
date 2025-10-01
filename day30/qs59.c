//Count even and odd numbers in an array.
#include <stdio.h>
int main() {
    int n;  
 printf("Enter the number of elements: ");
    scanf("%d", &n);
 int arr[n];
 int even = 0, odd = 0;
 printf("Enter the elements: ");
   for (int i = 0; i < n; i++) {
 scanf("%d", &arr[i]);
    if (arr[i] % 2 == 0)
      even++;
    else
      odd++;
 }
 printf("Even=%d, Odd=%d\n", even, odd);
     return 0;
}
