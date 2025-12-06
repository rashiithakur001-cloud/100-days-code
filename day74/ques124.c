//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include<stdio.h>

int main(){
    char src[60];
    char desti[60];
    FILE *fsrc ,*fdes;
    char ch;
printf("Enter source file name: ");    
    scanf("%s", src);
printf("Enter destination file name: ");  
    scanf("%s", desti);
while((ch = fgetc(fsrc))!=EOF){   //loop to copy ch by ch
        fputs(ch, fdes);
    }
printf("file copied!!");

    fclose(fsrc);   //closes file
    fclose(fdes);  
 return 0;
}                    