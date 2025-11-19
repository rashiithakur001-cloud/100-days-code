//Insert an element in an array at a given position.

#include<stdio.h>
int main(){
int size;
    printf("enter the size of array: "); 
    scanf("%d",&size);
  int arr[size];
    for(int i = 0 ; i < size ; i++){           // store value in array
     printf("enter the %d value: ",i+1);
     scanf("%d",&arr[i]);
}
 int pos,ele;
   printf("enter the element you want to insert: ");   // element to insert
    scanf("%d",&ele);
   printf("enter the position you want to enter the element: ");   //input the position
    scanf("%d",&pos);
 for(int i = size - 1 ; i >= pos; i--){    //space for the new elemet
        arr[i+1] = arr[i];
    }
arr[pos] = ele;    //inserting elemet at the space
    size++;
 for(int i = 0 ; i < size ; i++){    //printing the array with new element 
        printf("%d ",arr[i]);
    }
 return 0;
}                       