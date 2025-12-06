/*Write a program that reads text from input.txt, converts all lowercase letters to uppercase
,and writes the result to output.txt.*/
#include <stdio.h>
#include <ctype.h> 
int main() {
    FILE *f_in, *f_out;
    char c;
f_in = fopen("Input.txt", "r");
    if (f_in == NULL) {
        printf("Error opening input.txt\n");
        return 1;
    }
f_out = fopen("Output.txt", "w");
    if (f_out == NULL) {
        printf("Error opening output.txt\n");
        fclose(f_in);
        return 1;
    }
while ((c = fgetc(f_in)) != EOF) {
        if (c >= 'a' && c <= 'z')
            c = toupper(c);  
        fputc(c, f_out);        
    }
    fclose(f_in);
    fclose(f_out);
printf("Conversion complete! Check output.txt\n");
    return 0;
}
