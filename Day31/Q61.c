/*Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>
int main() {
    int n,i,search,found=-1;
    printf("enter the size of array");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the element to search:");
    scanf("%d",&search);
    for(i=0;i<n;i++){
        if(arr[i]==search){
            found=i;
            break;
        }
    }
    printf("%d",found);
    return 0;
}