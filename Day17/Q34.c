/*
Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>
int main(){
    int num;
    int i,flag=0;
    printf("enter the number");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++){
        if(num%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("Prime");
    }
    else{
        printf("Not prime");
    }
    return 0;
}