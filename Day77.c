#include <stdio.h>

int main() {
    FILE *inFile, *outFile;
    int ch; // Use int to safely store characters and detect EOF

    // 1. Open input.txt in read mode ("r")
    inFile = fopen("input.txt", "r");
    if (inFile == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    // 2. Open/create output.txt in write mode ("w")
    outFile = fopen("output.txt", "w");
    if (outFile == NULL) {
        printf("Error: Could not create output.txt\n");
        fclose(inFile);
        return 1;
    }

    // 3. Read each character, convert lowercase to uppercase, and write to output.txt
    while ((ch = fgetc(inFile)) != EOF) {
        // Check if the character is between 'a' and 'z'
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32; // Subtract 32 (ASCII difference) to make it uppercase
        }
        fputc(ch, outFile);
    }

    // 4. Close both files
    fclose(inFile);
    fclose(outFile);

    printf("File converted to uppercase and saved to output.txt\n");

    return 0;
}
