/*Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>
int main() {
    int n, i, j, newElement;
    printf("enter the size of array:");
    scanf("%d", &n);
    int arr[n + 1]; // Increase size by 1 to accommodate the new element
    printf("enter the elements of array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("enter the element to insert:");
    scanf("%d", &newElement);

    // Find the appropriate position to insert the new element
    for (i = n - 1; (i >= 0 && arr[i] > newElement); i--) {
        arr[i + 1] = arr[i]; // Shift elements to the right
    }
    arr[i + 1] = newElement; // Insert the new element

    printf("array after insertion:\n");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}