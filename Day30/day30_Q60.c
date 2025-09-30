// Q60: Count positive, negative, and zero elements in an array.

#include <stdio.h>

int main() {
    int n, i, positiveCount = 0, negativeCount = 0, zeroCount = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    printf("Positive=%d, Negative=%d, Zero=%d\n", positiveCount, negativeCount, zeroCount);
    return 0;
}