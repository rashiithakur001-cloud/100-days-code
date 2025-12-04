//Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
#include <stdio.h>
int main() {
    int n;
printf("Enter n: ");     //taking input or size of array
    scanf("%d", &n);
int arr[n];
printf("Enter %d elements:\n", n);   
    for(int i = 0; i < n; i++)          //taking input for the array
        scanf("%d", &arr[i]);
int maxSum = arr[0];
    int curSum = arr[0];
for(int i = 1; i < n; i++){
        if(curSum + arr[i] > arr[i]){
            curSum += arr[i];
        }
 else{
         curSum = arr[i];
        }

        if(curSum > maxSum){
            maxSum = curSum;
        }
    }
   printf(" The Maximum Subarray Sum = %d\n", maxSum);
   return 0;
}                      