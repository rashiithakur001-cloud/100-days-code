//Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>
int main() {
    int totalSeconds, hours, minutes;
    int seconds;

    printf("Enter the totalseconds");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    totalSeconds = totalSeconds - (hours * 3600);
    minutes = totalSeconds / 60;
    seconds = totalSeconds - (minutes * 60);
    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}