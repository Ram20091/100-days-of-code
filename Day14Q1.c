#include <stdio.h>

int main() 
{
    int n, i;
    int current_odd = 1;
    int sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop runs exactly 'n' times to find and add 'n' odd numbers
    for (i = 1; i <= n; i++) {
        sum = sum + current_odd;   // Add the current odd number to our running total
        current_odd = current_odd + 2; // Move to the next odd number
    }

    printf("The sum of the first %d odd numbers is: %d\n", n, sum);

    return 0;
}