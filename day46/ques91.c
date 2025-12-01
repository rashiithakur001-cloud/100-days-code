// Remove all vowels from a string.
#include <stdio.h>
int main() {
 char str[100], result[100];
    int i, j = 0;
    printf("Enter a string: ");
    scanf("%s", str);  
for(i = 0; str[i] != '\0'; i++){
    char ch = str[i];
 if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u'){
    result[j++] = ch;
        }  
    }

    result[j] = '\0';  
printf("String without vowels: %s\n", result);
    return 0;
}