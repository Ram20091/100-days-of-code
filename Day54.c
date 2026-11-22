#include <stdio.h>
int main() {
    int n;
    int totalSum = 0;
    int leftSum = 0;
    int pivot = -1; 
    printf("Enter a positive integer n: ");
    scanf("%d", &n);


    for (int i = 1; i <= n; i++) {
        totalSum = totalSum + i;
    }


    for (int x = 1; x <= n; x++) {

        leftSum = leftSum + x;
        int rightSum = totalSum - leftSum + x;

        if (leftSum == rightSum) {
            pivot = x;
            break; 
        }
    }


    printf("%d\n", pivot);

    return 0;
}