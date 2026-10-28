#include <stdio.h>

int main() {
    int num, remainder;
    int product = 1; // Start at 1 because multiplying by 0 results in 0!

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        remainder = num % 10; // 1. Get the last digit

        // 2. Check if the digit is odd (not divisible by 2)
        if (remainder % 2 != 0) { 
            product = product * remainder; // 3. Multiply it to our running total
        }

        num = num / 10; // 4. Chop off the last digit
    }

    printf("Product of odd digits = %d\n", product);

    return 0;
}