//Replace spaces with hyphens in a string.
#include <stdio.h>
int main(){
    char str[100] = "hii everyone, its: 16/11/24 and its #monday";
    for (int i=0; str[i]!='\0';i++){
        if(str[i]==' '){
        str[i]='-';
        }
    }
    printf("The modified string is %s",str);
    return 0;
}