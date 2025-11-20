//Rotate an array to the right by k positions. in c

#include<stdio.h>
int main(){
 int size;
 printf("enter the size of array: ");      
 scanf("%d",&size);
int arr[size];
 for(int i = 0 ; i < size ; i++){           // store values in array
  printf("enter the %d value: ",i+1);
  scanf("%d",&arr[i]);
}
 int K;
 printf("Enter position to rotate: ");  // The position of rotation
  scanf("%d",&K);
 for(int i = 0 ; i < K ; i++){     //rotate position by k 
   int temp = arr[size - 1];
 for(int j = size - 1 ; j > 0 ; j--){
   arr[j] = arr[j -1];
 }
   arr[0] = temp;    
}
 for(int i = 0 ; i < size ; i++){   // print all elements of array
  printf("%d ",arr[i]);
 }
  return 0;
}                 