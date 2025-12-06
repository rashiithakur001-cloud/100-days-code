//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include<stdio.h>
int main(){
 char src[80];
 char desti[80];
FILE *fsrc ,*fdest;
    char ch;
printf("Enter source file name: ");   
    scanf("%s", src);
printf("Enter destination file name: ");  
    scanf("%s", desti);
while((ch = fgetC(fsrc))!=EOF){   //loop to copy ch by ch
        fputs(ch, fdest);
    }
printf("File copied!!");
   fclose(fsrc);  
   fclose(fdest);  
return 0;
}                  