// Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include<stdio.h>
 int main(){
    
    int y;
    printf("Enter the year");
    scanf("%d",&y);
    if(y%4==0 || y%400==0 && y%100!=0){
        printf(" year %d is Leap year",y);
    }
    else{
        printf(" year %d is Not an Leap year",y);
    }
    return 0;
}