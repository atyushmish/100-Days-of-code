/*Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>
int main() {
    int n, i, largest, secondLargest;
    printf("enter the size of array:");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements of array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return 0;
    }

    largest = secondLargest = -2147483648; // Initialize to minimum integer value

    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == -2147483648) {
        printf("There is no second largest element.\n");
    } else {
        printf("Second largest element is: %d\n", secondLargest);
    }

    return 0;
}