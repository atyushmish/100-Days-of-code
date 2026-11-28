/*Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>

enum Operation {
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main() {
    enum Operation op = ADD;
    int a = 10, b = 20, result;

    switch (op) {
        case ADD:
            result = a + b;
            break;
        case SUBTRACT:
            result = a - b;
            break;
        case MULTIPLY:
            result = a * b;
            break;
    }

    printf("%d\n", result);
    return 0;
}