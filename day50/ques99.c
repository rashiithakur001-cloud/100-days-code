// Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
int main() {
    char date[15], day[3], month[3], year[5];
    int i, j;
    printf("Enter Date in dd/MM/yyyy = ");
    scanf("%s", date);
for (i = 0; i < 2; i++){
        day[i] = date[i];
        day[2] = '\0';
    }
for (i = 3, j = 0; j < 2; i++, j++){
        month[j] = date[i];
        month[2] = '\0';
    }
for (i = 6, j = 0; date[i] != '\0'; i++, j++){
        year[j] = date[i];
        year[4] = '\0';
    }
int m = (month[0] - '0') * 10 + (month[1] - '0');
printf("%s-", day);
switch (m) {
        case 1:  printf("Jan"); break;
        case 2:  printf("Feb"); break;
        case 3:  printf("Mar"); break;
        case 4:  printf("Apr"); break;
        case 5:  printf("May"); break;
        case 6:  printf("Jun"); break;
        case 7:  printf("Jul"); break;
        case 8:  printf("Aug"); break;
        case 9:  printf("Sep"); break;
        case 10: printf("Oct"); break;
        case 11: printf("Nov"); break;
        case 12: printf("Dec"); break;
    }
 printf("-%s", year);
    return 0;
}