//Write a program to input two numbers and display their sum.

#include <stdio.h>
int main() {
     
    int a, b, sum;
    printf("Enter the first integer: ");
    scanf("%d", &a);
    printf("Enter the second integer: ");
    scanf("%d", &b);
    sum = a + b;
    printf("sum = %d\n", sum);
    return 0;
}