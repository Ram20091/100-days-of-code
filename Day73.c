#include <stdio.h>

int main() {
    FILE *filePointer;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0; // Flag to track if we are currently inside a word (0 = No, 1 = Yes)

    // 1. Open the file in read mode ("r")
    filePointer = fopen("sample.txt", "r");

    if (filePointer == NULL) {
        printf("Error: Could not open sample.txt. Make sure the file exists.\n");
        return 1;
    }

    // 2. Read one character at a time until End of File (EOF)
    while ((ch = fgetc(filePointer)) != EOF) {
        characters++;

        // Count a line every time a newline character is found
        if (ch == '\n') {
            lines++;
        }

        // Check for spaces, tabs, or newlines to separate words
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            inWord = 0; // We exited a word
        } else if (inWord == 0) {
            inWord = 1; // We entered a new word
            words++;
        }
    }

    // 3. Handle the last line if the file is not empty and doesn't end with '\n'
    if (characters > 0) {
        lines++;
    }

    // 4. Close the file and display the results
    fclose(filePointer);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
