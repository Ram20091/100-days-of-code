#include <stdio.h>

int main() {
    int n, isPrime;

    printf("Enter the value of n: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Error: Please enter a valid positive integer.\n");
        return 1;
    }

    printf("Prime numbers between 1 and %d are:\n", n);

    for (int i = 2; i <= n; i++) {
        isPrime = 1; 

        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0; 
                break;       
            }
        }

        
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}