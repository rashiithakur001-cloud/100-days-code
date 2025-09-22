//Write a program to check if the numbber is palindrome.
#include <stdio.h>
int main() {
int num, original, rev= 0, digit;
printf("Enter a number: ");
    scanf("%d", &num);
  original = num;
  while (num > 0) {
        digit = num % 10;             
        rev = rev * 10 + digit;  
        num = num / 10;            
    }
  if (original == rev)
    printf("Number is Palindrome\n");
  else
     printf("Number is not palindrome\n");
  return 0;
}