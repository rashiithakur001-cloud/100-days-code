//Check if two strings are anagrams of each other.
#include <stdio.h>
int main() {
    char str1[80], str2[80];
    scanf("%[^\n]", str1);
    getchar();           // To consume newline after first input
    scanf("%[^\n]", str2);

    int freq[256] = {0}; // ASCII frequency table
    for (int i = 0; str1[i] != '\0'; i++) {
        freq[(unsigned char)str1[i]]++;
    }
    for (int i = 0; str2[i] != '\0'; i++) {
        freq[(unsigned char)str2[i]]--;
    }
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Not Anagrams\n");
            return 0;
        }
    }
 printf("Anagrams\n");
    return 0;
}