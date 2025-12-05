//Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.
#include<stdio.h>
int main(){
 FILE *fp;
char line[150];
 fp = fopen("File.txt","r");   //file to read text from it
 printf("Content in file\n");
   while(fgets(line, sizeof(line), fp) != NULL){   //read the file 
        printf("%s",line);
    }
fclose(fp);   //closes file
   return 0;
}            //end