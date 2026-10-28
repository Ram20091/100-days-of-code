#include <stdio.h>

int main() {
    int num, originalNum, swappedNum;
    int firstDigit, lastDigit;
    int divisor = 1;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    originalNum = num;
    lastDigit = num % 10;
  
    int temp = num;
    while (temp >= 10) {
        temp = temp / 10; 
        divisor = divisor * 10; 
    }
    firstDigit = temp;

    int middlePart = (num % divisor) / 10;
    swappedNum = (lastDigit * divisor) + (middlePart * 10) + firstDigit;
    printf("Original number: %d\n", originalNum);
    printf("Swapped number:  %d\n", swappedNum);

    return 0;
}