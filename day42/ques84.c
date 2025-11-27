//Convert a lowercase string to uppercase without using built-in functions.

#include<stdio.h>
int main(){

    char string[100];             //declaring string
   
    printf("enter a string: ");      //input a string
    scanf("%s",&string);

    for(int i = 0 ; string[i] != '\0' ; i++){  //loop to change lower case character to upper case
        string[i] = string[i] - 32;
    }

    printf("%s",string);  //output

    return 0;
}                        //end