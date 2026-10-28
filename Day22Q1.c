#include <stdio.h>

int main() {
    int num, originalNum, lastDigit, totalSum = 0;

    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1 || num < 0) {
        printf("Error: Please enter a valid positive integer.\n");
        return 1;
    }

    originalNum = num; 

    
    while (num > 0) {
        lastDigit = num % 10;

       
        int factorial = 1;
        for (int i = 1; i <= lastDigit; i++) {
            factorial = factorial * i;
        }

        totalSum = totalSum + factorial; 
        num = num / 10; 
    }
    if (totalSum == originalNum) {
        printf("%d is a strong number.\n", originalNum);
    } else {
        printf("%d is NOT a strong number.\n", originalNum);
    }

    return 0;
}