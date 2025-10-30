// Q79: Perform diagonal traversal of a matrix.

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
    printf("Diagonal traversal of the matrix is:\n");
    for (int col = 0; col < cols; col++) {
        int startCol = col;
        int startRow = 0;
        while (startCol >= 0 && startRow < rows) {
            printf("%d ", matrix[startRow][startCol]);
            startCol--;
            startRow++;
        }
    }
    for (int row = 1; row < rows; row++) {
        int startCol = cols - 1;
        int startRow = row;
        while (startCol >= 0 && startRow < rows) {
            printf("%d ", matrix[startRow][startCol]);
            startCol--;
            startRow++;
        }
    }
    printf("\n");
    return 0;
}