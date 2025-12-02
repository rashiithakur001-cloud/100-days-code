//Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>
int isRot(char s1[], char s2[]) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    if (len1 != len2) return 0;
 char temp[100];
strcpy(temp, s1);
    strcat(temp, s1);
if (strstr(temp, s2) != NULL)
  return 1;
   return 0;
}
int main() {
    char str1[100], str2[100];
printf("Enter first string: ");
    scanf("%s", str1);
printf("Enter second string: ");
    scanf("%s", str2);
if (isRot(str1, str2))
        printf("one string is a rotation of the other.\n");
    else
        printf("The strings are NOT rotations.\n");
return 0;
}