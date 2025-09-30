// Q40: Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
int main() {
    
    int n;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    int complement = 0, place = 1;
    while (n != 0) {
        int digit = n % 10;
        complement += (digit == 0 ? 1 : 0) * place;
        n /= 10;
        place *= 10;
    }
    printf("1's complement is: %d\n", complement);
    return 0;
}