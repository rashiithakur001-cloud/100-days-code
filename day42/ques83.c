//Count vowels and consonants in a string.

#include<stdio.h>
int main(){

    char string[100];             //declaring string
   
    printf("enter a string: ");      //input a string
    scanf("%s",&string);

    int conso = 0;
    int vowel = 0;

    for(int i = 0  ; string[i] != '\0' ; i++){                                                                   //loop to count vowels and consonants in the string
        if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u'){
            vowel++;
        }
        else{
            conso++;
        }
    }

    printf("consonants = %d vowel = %d",conso,vowel);  //output

    return 0;
}                            //end