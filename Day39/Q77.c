// Q77: Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>
#include <stdbool.h>

int main() {
    int rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    if (rows != cols) {
        printf("False\n");
        return 0;
    }
    int matrix[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    bool isDistinct = true;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == j) {
                for (int k = 0; k < i; k++) {
                    if (matrix[i][i] == matrix[k][k]) {
                        isDistinct = false;
                        break;
                    }
                }
            }
        }
    }
    printf("%s\n", isDistinct ? "True" : "False");
    return 0;
}