// Q66: Insert an element in a sorted array at the appropriate position.

#include <stdio.h>
#include <stdbool.h>

void insertInSortedArray(int arr[], int n, int key) {
    int i;
    for (i = n - 1; (i >= 0 && arr[i] > key); i--) {
        arr[i + 1] = arr[i];
    }
    arr[i + 1] = key;
}
    int main() {
    int arr[100], n, key;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the sorted array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to insert: ");
    scanf("%d", &key);
    insertInSortedArray(arr, n, key);
    printf("Array after insertion:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}