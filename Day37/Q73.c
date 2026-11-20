/*Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>
int main() {
    int rows, cols, i, j;
    printf("enter the number of rows and columns:");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    int rowSum[rows]; // Array to store the sum of each row

    printf("enter the elements of matrix:\n");
    for (i = 0; i < rows; i++) {
        rowSum[i] = 0; // Initialize row sum to 0
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j]; // Add each element to the corresponding row sum
        }
    }

    printf("sum of each row:\n");
    for (i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
    }
    return 0;
}