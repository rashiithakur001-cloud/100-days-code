//Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.
// N.B:
// - Print the output for each element in a comma separated fashion.
// - Do not use Stack, use brute force approach (nested loop) to solve.

#include <stdio.h>

int main(){
    int n;

    if(scanf("%d", &n) != 1){    //return 0 if the value in not equals to 1
        return 0;
    }

    int arr[n];
    for(int i = 0; i < n; i++){    //loop to takin array value input from user
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        int prev = -1;
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) { prev = arr[j]; break; }
        }
        printf("%d", prev);
        if (i < n - 1) printf(",");
    }
    printf("\n");      ///for next line
    return 0;
}                    //end