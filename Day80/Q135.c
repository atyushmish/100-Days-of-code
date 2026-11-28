/*Q135: Assign explicit values starting from 10 and print them.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
A=10
B=11
C=12

*/
#include <stdio.h>

enum Values {
    A = 10,
    B = 11,
    C = 12
};

int main() {
    enum Values val = A;
    printf("A=%d\n", val);
    val = B;
    printf("B=%d\n", val);
    val = C;
    printf("C=%d\n", val);
    return 0;
}