//Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
#include <stdio.h>
#include <ctype.h> 
int main() {
 FILE *fp;
    char c;
int vowels = 0, consonants = 0;
    fp = fopen("file.txt", "r");
if (fp == NULL) {
printf("Error opening file!\n");
        return 1;
    }
 while ((c = fgetc(fp)) != EOF) {
     c = tolower(c); 
    if (isalpha(c)) {   
if (c =='a' || c =='e' || c =='i' || c =='o' || c =='u')
        vowels++;
else
      consonants++;
 }
    }
   fclose(fp);
printf("Vowels      : %d\n", vowels);
printf("Consonants  : %d\n", consonants);
   return 0;
}
