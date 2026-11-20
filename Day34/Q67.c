/*Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>
int main() {
    int n, i, pos, newElement;
    printf("enter the size of array:");
    scanf("%d", &n);
    int arr[n + 1]; // Increase size by 1 to accommodate the new element
    printf("enter the elements of array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("enter the position to insert:");
    scanf("%d", &pos);
    printf("enter the element to insert:");
    scanf("%d", &newElement);

    // Shift elements to the right to make space for the new element
    for (i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos] = newElement; // Insert the new element

    printf("array after insertion:\n");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}