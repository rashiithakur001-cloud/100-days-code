//Write a program to find the LCM of two numbers
#include<stdio.h>
int main(){
    int a, b, max, lcm;
    printf("enter two numbers");
    scanf("%d %d", &a, &b);
    max = (a > b) ? a : b;
    while(1) {
        if(max % a == 0 && max % b == 0) {
        lcm = max;
         break;
        }
        max++;
    }
  printf("%d", lcm);
 return 0;
}
