/*
Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>
int main(){
    int num;
    int original_num, sum = 0, digits = 0;
    int remainder;
    int power;
    printf ("enter the number ");
    scanf("%d", &num);
    original_num = num;
    while (num > 0) {
        remainder = num % 10;
        sum += pow(remainder, 3);
        num /= 10;
    }
    if (sum == original_num) {
        printf("Armstrong");
    } else {
        printf("Not Armstrong");
    }
    return 0;
}