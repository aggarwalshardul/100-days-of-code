//Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>
int main() {
    
    int Sec, hours, minutes, seconds;
    printf("Enter time in seconds: ");
    scanf("%d", &Sec);

    hours = Sec / 3600;
    minutes = (Sec % 3600) / 60;
    seconds = Sec % 60;

    printf("Time in hours:minutes:seconds = %02d:%02d:%02d\n", hours, minutes, seconds);
    return 0;
}