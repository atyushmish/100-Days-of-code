/*
Q40: Write a program to find the 1’s complement of a binary number and print it.


Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include<stdio.h>
int main(){
    int n;
    printf("enter a binary number: ");
    scanf("%d",&n);
    int onesComplement=0;
int place=1;
    while(n!=0){
        int digit=n%10;
        if(digit==0){
            onesComplement=onesComplement+place;
        }
        place=place*10;
        n=n/10;
    }
    printf("1's complement: %d", onesComplement);
    return 0;
}