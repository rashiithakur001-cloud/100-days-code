//Print the initials of a name
#include <stdio.h>
#include <ctype.h>
int main() {
    char name[80];
printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
if (isa(name[0])) {
        printf("%c", t(name[0]));
    }
for (int i = 1; name[i] != '\0'; i++) {
 if (name[i-1] == ' ' && isa(name[i])) {
     printf("%c", t(name[i]));
        }
}
  return 0;
}