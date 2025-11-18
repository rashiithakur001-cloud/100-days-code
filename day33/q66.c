//Insert an element in a sorted array at the appropriate position.

#include<stdio.h>
int main(){
 int size;
 printf("enter the size of array: ");   
  scanf("%d",&size);
 int array[size];
  for(int i = 0 ; i < size ; i++){        //store value in array
    printf("enter the %d value: ",i+1);
     scanf("%d",&array[i]);
 }
   int value;
 printf("enter the value to insert: ");  // value which we want to insert
    scanf("%d",&value);
 int position = -1;
    int i;
 for(i = 0 ; i < size ; i++){     // find the position of the new value to insert
  if(array[i] > value){
  position = i;
  break;
  }
    }
 if(position == -1){    //execute,if the value we insert is greater than all the values in array
  position = size;
}
  for(i = size ; i > position ; i--){    //shift element to make space for the new inserted one 
        array[i] = array[i - 1];
    }
  array[position] = value;
    size++;                         //increasing size of array by 1
  for(i = 0 ; i < size ; i++){   //print new array with inserted value 
        printf("%d ",array[i]);
    }
  return 0; 
}                                     