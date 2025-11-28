//check if a string is a palindrome.
#include <stdio.h>
#include <string.h>         
int main(){
    char str[100]; 
    int i, len;
    int flag = 0; 
printf("Enter a string: ");
    gets(str);              
len = strlen(str);               //length of the string input by user
 for(i = 0; i < len / 2; i++){         //to compare string from both end to check if its palindrome
    if(str[i] != str[len - i - 1]){
     flag = 1; 
     break;   
  }
    }
 if(flag == 0){
     printf("%s is a Palindrome string.\n", str);      
    } 
    else{
     printf("%s is NOT a Palindrome string.\n", str);   
 return 0;
}                                 