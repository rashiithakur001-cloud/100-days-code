//Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
#include<stdio.h>
int main(){
    FILE *fp;
    char ch;
    int chars = 0, words = 0, lines = 0;
    int inword = 0;
 fp = fopen("File.txt","r");
  while((ch = fgetc(fp)) != EOF){  //loop to check for all the condition
        chars++;
        if(ch = '\n'){
            lines++;
}
    if(ch == ' ' || ch == '\t'){
        inword = 0;
        }
        else{
            if(inword == 0){
                words++;
                inword = 1;
            }
        }
    }
fclose(fp);     //closes file
printf("character: %d\n" , chars);
printf("words: %d\n" ,words);
printf("lines: %d\n", lines);
 return 0;
}                     