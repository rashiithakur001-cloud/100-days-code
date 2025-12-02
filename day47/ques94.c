// Q94: Find the longest word in a sentence.
#include <stdio.h>
int main() {
    char sen[200], word[100], longest[100];
    int i = 0, j = 0, k, len = 0, maxLen = 0;
printf("Enter a sentence: ");
    gets(sen);  
while (sen[i] != '\0') {
    if (sen[i] != ' ') {  
     word[j] = sen[i];
       j++;
       len++;
} else {                   
     word[j] = '\0';
if (len > maxLen) {    
  maxLen = len;
 for (k = 0; k <= j; k++)
    longest[k] = word[k];  
  }
     j = 0;
    len = 0;
   }
     i++;
 }
 word[j] = '\0';
  if (len > maxLen) {
  for (k = 0; k <= j; k++)
   longest[k] = word[k];
   }
printf("Longest word: %s\n", longest);
  return 0;
}