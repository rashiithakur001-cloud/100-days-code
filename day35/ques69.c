//Find the second largest element in an array.

#include<stdio.h>
int main(){
int size;
printf("Enter the size of array: ");   
scanf("%d",&size);
int arr[size];
for(int i = 0 ; i < size ; i++){         // store value in array
  printf("enter the %d value: ",i+1);
  scanf("%d",&arr[i]);
 }
int large = arr[0];         //assuming first value is the largest 
int sec_large = arr[1];     //assuming the second largest is the second value of the array
int temp;

 if(large < sec_large){    //fix if second largest is greatet than largest 
    temp = large;
    large = sec_large;
    sec_large = temp;
    }
 for(int i = 2 ; i < size ; i++){   // find second largest value
        if(arr[i] > large){
            sec_large = large;
            large = arr[i];
 }
}
printf("second largest number in array is: %d\n",sec_large);   // The second largest value
 return 0;
}               