#include<stdio.h>
int main()
{
    int num;
    int binary = 0;
    int remainder;
    int place = 1; // 👈 Keeps track of the 1s, 10s, 100s, 1000s place

    // 1. Ask the user for a number
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    // 2. Loop until the number becomes 0
    while (num > 0) {
        remainder = num % 2;               // Get the remainder (0 or 1)
        binary = binary + (remainder * place); // Put it in the correct math position
        place = place * 10;                // Shift to the next position (1 -> 10 -> 100...)
        num = num / 2;                     // Divide the number by 2
    }

    // 3. Print the final binary answer
    printf("Binary representation: %d\n", binary);

    return 0;
}