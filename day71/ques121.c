/*write a C program that creates a text file named info.txt in write mode. The program should 
take the user’s name and age as input, and write them to the file using fprintf().
After writing, display a message confirming that the data was successfully saved.*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *fp;
    char Name[80];
    int Age;
printf("Enter your name: ");
    scanf("%s", &Name);
printf("Enter your age: ");
    scanf("%d", &Age);
    fp = fopen("info.txt", "w");
if (fp == NULL) {
        printf("Error,Could not create file!\n");
        return 1;
    }
   // Write data to file
fprintf(fp, "Name: %s\n", Name);
fprintf(fp, "Age: %d\n", Age);
  fclose(fp);
printf("Data saved to info.txt\n");
   return 0;
}
