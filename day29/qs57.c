// Find the sum of array elements
 #include <stdio.h>
int main() {
 int n, sum = 0;
  printf("Enter the number of elements: ");
    scanf("%d", &n);
 int arr[n];
  printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
     scanf("%d", &arr[i]);
     sum += arr[i]; 
    }
 printf("Sum of elements: %d\n", sum);
    return 0;
}