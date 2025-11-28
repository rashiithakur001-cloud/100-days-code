//Reverse a string.
#include<stdio.h>
#include<string.h>    
int main(){

 char str[] = "abcd";              //string takes as input
  int left = 0;
    int right = strlen(str) - 1;
    char tem;
 while(left < right){    // to reverse the array
        tem = str[left];
        str[left] = str[right];
        str[right] = tem;

        left++;
        right--;
   }
printf("string after reverse: %s",str);    
 return 0;
}                          