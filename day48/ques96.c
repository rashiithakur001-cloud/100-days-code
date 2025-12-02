//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
int main() {
    char sent[200];
    int i, start, end;
 printf("Enter a sentence: ");
    gets(sent);
 i = 0;
 while (sent[i] != '\0') {
 while (sent[i] == ' ' && sent[i] != '\0') i++;
start = i;
    while (sent[i] != ' ' && sent[i] != '\0') i++;
    end = i - 1;
 while (start < end) {
        char temp = sent[start];
        sent[start] = sent[end];
            sent[end] = temp;
        start++;
        end--;
        }
    }
printf("Output: %s\n", sent);
    return 0;
}