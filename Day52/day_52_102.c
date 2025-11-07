//Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. 
//This element is called the ceil of x. If such an element does not exist, print -1. 
//Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

#include <stdio.h>

int findCeil(int arr[], int n, int x) {
    int left = 0, right = n - 1;
    int ceilIndex = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] >= x) {
            ceilIndex = mid;
            right = mid - 1; 
        } else {
            left = mid + 1;
        }
    }

    return ceilIndex;
}

int main() {
    int arr[] = {1, 2, 8, 10, 11, 12, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    int result = findCeil(arr, n, x);
    printf("The ceil of %d is at index: %d\n", x, result);

    return 0;
}