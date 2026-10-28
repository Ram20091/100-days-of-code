#include <stdio.h>

int main() {
    int num, originalNum, remainder;
    int sum = 0; // Don't forget to start the sum at 0!

    printf("Enter a number: ");
    scanf("%d", &num);

    // Save the original number before we change 'num'
    originalNum = num;

    while (num > 0) {
        remainder = num % 10; // 1. Get the last digit
        
        // 2. Cube the digit (multiply it by itself 3 times)
        int cube = remainder * remainder * remainder; 
        
        sum = sum + cube;     // 3. Add the cube to our total sum
        num = num / 10;       // 4. Chop off the last digit
    }

    // Compare the final sum with the original number
    if (originalNum == sum) {
        printf("Armstrong number\n");
    } else {
        printf("Not an Armstrong number\n");
    }

    return 0;
}