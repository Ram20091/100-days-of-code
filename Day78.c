#include <stdio.h>

int main() {
    FILE *filePointer;
    int ch;
    int vowels = 0, consonants = 0;

    // 1. Open text.txt in read mode ("r")
    filePointer = fopen("text.txt", "r");
    if (filePointer == NULL) {
        printf("Error: Could not open text.txt\n");
        return 1;
    }

    // 2. Read each character until End of File (EOF)
    while ((ch = fgetc(filePointer)) != EOF) {
        // Convert uppercase letters to lowercase temporarily for easy checking
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        // Check if the character is an alphabet letter ('a' to 'z')
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        // Spaces, digits, newlines, and special characters are automatically ignored
    }

    // 3. Close the file and display the counts
    fclose(filePointer);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
