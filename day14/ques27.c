//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>
int main(){
int n,sum=0;
 printf("Enter number:");
  scanf("%d",&n);
for(int i=1;i<=n;i++){
 if(i%2!=0){
    sum+=i;
 }  }
 printf("The sum of odd natural numbers between 1 to %d is %d",n,sum);
return 0;
}