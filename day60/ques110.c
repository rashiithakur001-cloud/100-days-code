/* Q110: Write a program to take an integer array arr and an integer k as inputs. 
The task is to find the maximum element in each subarray of size k moving from left to right. 
Print the maximum elements for each window separated by spaces as output. */
#include<stdio.h>
int main(){
int n, k;
printf("Enter number of elements: ");
    scanf("%d", &n);
 int arr[n];
 printf("Enter elements of the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
printf("Enter the size of window k: ");
    scanf("%d", &k);
printf("Maximum elements of each subarray of size %d are:\n", k);
for(int i = 0; i <= n - k; i++){
    int max = arr[i];
 for(int j = 1; j < k; j++){
   if (arr[i + j] > max)
    max = arr[i + j];
    }
    printf("%d ", max);
 }
return 0;
}