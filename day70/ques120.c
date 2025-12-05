//Write a program to take a string input. Change it to sentence case.
#include<stdio.h>
#include<ctype.h>
int main(){
char str[150];     
  printf("Enter a string: ");    
    fgets(str, sizeof(str), stdin);
if(str[0] >= 'a' && str[0] <= 'z'){    //change first letter lower case to upper case 
        str[0] = toupper(str[0]);
    }
for(int i = 1; str[i] != '\0';i++){       //convert rest character to lowercase
    if(str[i] >= 'A' && str[i] <= 'Z'){
     str[i] = tolower(str[i]);
  }
    }

 printf("sentence: %s",str); 
return 0;
}                       