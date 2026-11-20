/*Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>
int main() {
    int n, i, pos;
    printf("enter the size of array:");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements of array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("enter the position to delete:");
    scanf("%d", &pos);

    // Shift elements to the left to delete the element at the given position
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    printf("array after deletion:\n");
    for (i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}