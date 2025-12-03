//Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
#include <stdio.h>
int main(){
    int n; 
    scanf("%d", &n);   //taking array size input from user
  int a[n], ans[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
int left=1;
    for(int i=0;i<n;i++){
        ans[i]=left;
        left*=a[i];
    }
 int right=1;
    for(int i=n-1;i>=0;i--){
        ans[i]*=right;
        right*=a[i];
    }
for(int i=0;i<n;i++) printf("%d ", ans[i]);   
}  