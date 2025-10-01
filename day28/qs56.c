//Read and print elements of a one-dimensional array.

#include <stdio.h>

int main(){
    printf("The elements of the arrays are:");
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<10;i++){
        printf("\n %d ",a[i]);
    }
   
    return 0;
}