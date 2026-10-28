#include <stdio.h>

int main() {
    // 1. Create a character array (string) to hold the binary number
    char binary[100];
    int i = 0;

    // 2. Ask the user to type a binary number
    printf("Enter a binary number: ");
    scanf("%s", binary);

    printf("1's Complement : ");

    // 3. Look at each character one by one until the string ends ('\0')
    while (binary[i] != '\0') {
        if (binary[i] == '1') {
            printf("0"); // If it's 1, print 0
        } 
        else if (binary[i] == '0') {
            printf("1"); // If it's 0, print 1
        }
        
        i++; // Move to the next character
    }

    printf("\n"); // Print a new line at the end
    return 0;
}