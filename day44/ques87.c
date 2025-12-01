#include <stdio.h>
//Count spaces, digits, and special characters in a string.
int main() {
    int Dcount = 0;
    int spcount = 0;     // special count
    int spacecount = 0;
    char str[100] = "hello i am rashi, My birthday is on :14/11/ and my email is rashii@gmail.com";
for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            spacecount++;
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            Dcount++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            
        }
        else {
            spcount++;
        }
    }

    printf("The number of special characters are: %d\n", spcount);
    printf("The number of digits are: %d\n", Dcount);
    printf("The number of spaces are: %d\n", spacecount);

    return 0;
}