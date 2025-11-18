//Search in a sorted array using binary search.

#include<stdio.h>
int main(){
 int size;
 printf("enter the size of array: "); 
 scanf("%d",&size);
 int array[size];
 for(int i = 0 ; i < size ; i++){     // stores value in array
  printf("enter the %d value: ",i+1);
    scanf("%d",&array[i]);
}
  int find;
 printf("enter the number you want to find: "); //to find value in array
    scanf("%d",&find);
  int low = 0 ;
  int high = size - 1;
  int result = -1;

  while(low <= high){                   //loop to check 
       int mid = (low + high)/2;  
       if(array[mid]==find){            //condition if the value is in the middle of the array
       result = mid;
      break;
 }
 else if(array[mid] < find){
     low = mid + 1;
 }
 else{
        high = mid - 1;
    }
 }
if(result != -1){
 printf("the the value %d is found at: %d index",find,result);  //output if the result is found
}
 else{
        printf("the value was not found in the array");    //output if the result is not found
    }
  return 0;
}                         