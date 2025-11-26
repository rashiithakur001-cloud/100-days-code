//count characters in a string without using built-in length functions.
#include<stdio.h>
int main(){
char string[80];            
printf("Enter a string: "); 
    scanf("%s",&string);
int count = 0;
   for(int i = 0 ; string[i] != '\0' ; i++){   //to count the length of the string
    count++;
}
 printf("The length of the string is: %d\n",count);   
    return 0;
}                    