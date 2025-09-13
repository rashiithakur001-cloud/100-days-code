//Write a program to input two numbers and display their sum.

#include<stdio.h>
int main(){
    int a,b;
    int sum;
    printf("Enter two numbers\n");
    scanf("%d %d", &a,&b);
    sum=a+b;
   printf("Sum = %d\n",sum);
   return 0;

}