#include <stdio.h>

int main() 
{
    int n, i;
    long long product = 1; // Using long long to prevent memory overflow for larger results
    int found_even = 0;    // Flag to keep track if we found at least one even number

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop through numbers from 1 to n
    for (i = 1; i <= n; i++) {
        // Check if the current number is even
        if (i % 2 == 0) {
            product = product * i;
            found_even = 1; // Mark that we found an even number
        }
    }

    // Output the result
    if (found_even == 1) {
        printf("The product of even numbers from 1 to %d is: %lld\n", n, product);
    } else {
        printf("There are no even numbers between 1 and %d.\n", n);
    }

    return 0;
}