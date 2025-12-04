//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
#include <string.h>
int main() {
    char s[300];
printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
 int last[228];  
    for (int i = 0; i < 228; i++)    //strores the last index
        last[i] = -1;   
int maxlen = 0, start = 0;
for(int i = 0; s[i] != '\0'; i++){
        char c = s[i];
if(last[(unsigned char)c] >= start){
     start = last[(unsigned char)c] + 1;
 }
last[(unsigned char)c] = i;
int currLen = i - start + 1;
  if(currLen > maxlen){
     maxlen = currLen;
 }
    }

    printf("Longest substring length = %d\n", maxlen);

    return 0;
}                     