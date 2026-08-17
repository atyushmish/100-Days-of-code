/*
Q11 Write a program to input an integer and check whether it is even or odd using if–else.

/*
Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/

#include<stdio.h>

int main(){
    int sum;
    printf("entre a integer:");
        scanf("%d",&sum);
        if(sum%2==0)
            printf("%d is even",sum);
        else
            printf("%d is odd",sum);
    return 0;
}