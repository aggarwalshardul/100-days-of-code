// Q73: Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
    scanf("%d", &matrix[i][j]);
    }
    }
    int rowSums[rows];
    for (int i = 0; i < rows; i++) {
    rowSums[i] = 0;
    for (int j = 0; j < cols; j++) {
    rowSums[i] += matrix[i][j];
    }
    }
    printf("Sum of each row is:\n");
    for (int i = 0; i < rows; i++) {
    printf("%d ", rowSums[i]);
    }
    printf("\n");
    return 0;
}
