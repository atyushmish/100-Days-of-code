/*Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>
int main() {
    int rows, cols, i, j, sum = 0;
    printf("enter the number of rows and columns:");
    scanf("%d %d", &rows, &cols);

    if (rows != cols) {
        printf("The matrix is not square. Cannot compute main diagonal sum.\n");
        return 0;
    }

    int matrix[rows][cols];
    printf("enter the elements of matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of main diagonal elements
    for (i = 0; i < rows; i++) {
        sum += matrix[i][i];
    }

    printf("sum of main diagonal elements is: %d\n", sum);
    return 0;
}