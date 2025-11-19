//Delete an element from an array.

#include<stdio.h>
int main(){
 int size;
printf("enter the size of array: ");      //array size
scanf("%d",&size);
 int array[size];
 for(int i = 0 ; i < size ; i++){        
 printf("enter the %d value: ",i+1);
 scanf("%d",&array[i]);
 }
 int pos;
 printf("enter the position of element you want to delete: ");  //position of the element to delete
 scanf("%d",&pos);
 for(int i = pos; i < size -1  ; i++){     //remove element and shift to the left
 array[i] = array[i + 1];
}
 size--;   //decreasing the size of the array
  
 for(int i = 0 ; i < size ; i++){      // print all element of the array after deleting
  printf("%d ",array[i]);
 }
return 0;
}                        