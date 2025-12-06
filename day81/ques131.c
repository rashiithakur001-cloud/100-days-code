//Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.
#include<stdio.h>
typedef enum{        //enum cretaed to store days of the week
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
}day;
int main(){
const char *daynames[] = {"SUNDAY","MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY"};  //string created to store week of the day
 for(int d = SUNDAY; d <= SATURDAY; d++){     //loop to print
     printf("%s : %d\n",daynames[d],d);
    }
return 0;
}                         