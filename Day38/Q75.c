/*Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>
int main() {
    int rows1, cols1, rows2, cols2, i, j;
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

    if (rows1 != rows2 || cols1 != cols2) {
        printf("Matrices cannot be added due to incompatible dimensions.\n");
        return 0;
    }

    int sumMatrix[rows1][cols1];
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("sum of the matrices is:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            printf("%d ", sumMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
