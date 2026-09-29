
/*Q37: Write a program to find the LCM of two numbers.


Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("enter the two numbers");
    scanf("%d %d",&a,&b);
    c=a*b;
    while(b!=0){
        d=b;
        b=a%b;
        a=d;
    }
    printf("LCM of %d and %d is %d",a,b,c/a);
}
