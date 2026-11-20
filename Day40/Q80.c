/*Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include <stdio.h>
int main() {
    int rows1, cols1, rows2, cols2, i, j, k;
    printf("enter the number of rows and columns for first matrix:");
    scanf("%d %d", &rows1, &cols1);
    int matrix1[rows1][cols1];

    printf("enter the elements of first matrix:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("enter the number of rows and columns for second matrix:");
    scanf("%d %d", &rows2, &cols2);
    int matrix2[rows2][cols2];

    printf("enter the elements of second matrix:\n");
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    if (cols1 != rows2) {
        printf("Matrices cannot be multiplied due to incompatible dimensions.\n");
        return 0;
    }

    int product[rows1][cols2];
    // Initialize product matrix to zero
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            product[i][j] = 0;
        }
    }

    // Multiply matrices
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            for (k = 0; k < cols1; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("product of the matrices is:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}