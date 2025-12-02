// Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>
int main() {
    char name[60];
    int i, lastSpace = -1;
 printf("Enter the name: ");
    gets(name); 

 for(i = 0; name[i] != '\0'; i++){
        if (name[i] == ' ')
         lastSpace = i;
    }
 printf("%c.", name[0]); 

    for(i = 0; name[i] != '\0'; i++){
        if(name[i] == ' ' && i != lastSpace){
            printf("%c.", name[i + 1]); 
        }
    }
printf(" ");
    for(i = lastSpace + 1; name[i] != '\0'; i++){
        printf("%c", name[i]);
    }
return 0;
}