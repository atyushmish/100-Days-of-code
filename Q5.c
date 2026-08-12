/*Q5 Write a program to convert temperature from Celsius to Fahrenheit.

Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include <stdio.h>

int main(){
    int c;
    printf("enter the temperature in celsius : ");
    scanf("%d", &c);
    int f = (int)(c * 9/5.0) + 32;
    printf("Fahrenheit = %d", f);
    return 0;
}