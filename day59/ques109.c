//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>
int main() {
    int n, k;
    if (scanf("%d", &n) != 1){   //yaking input from user
        return 0;
    }
 int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
if (scanf("%d", &k) != 1){
        return 0;
    }

if(k > n || k <= 0){
        printf("Invalid\n");
        return 0;
    }
long long sum = 0;
    for(int i = 0; i < k; i++){
        sum += arr[i];
    }
long long max = sum;
    for(int i = k; i < n; i++){
        sum += arr[i] - arr[i - k];
        if (sum > max) max = sum;
    }
 printf("%lld\n", max);   //ouptu
    return 0;
}   //end