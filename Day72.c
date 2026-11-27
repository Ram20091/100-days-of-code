#include <stdio.h>

int main() {
    FILE *filePointer;
    char line[256]; // Buffer to hold each line read from the file

    // 1. Open the existing file in read mode ("r")
    filePointer = fopen("info.txt", "r");

    // Check if the file exists and was opened successfully
    if (filePointer == NULL) {
        printf("Error: Could not open info.txt. Make sure the file exists.\n");
        return 1; // Exit the program with an error code
    }

    // 2. Read and print each line until End of File (EOF)
    while (fgets(line, sizeof(line), filePointer) != NULL) {
        printf("%s", line);
    }

    // 3. Close the file
    fclose(filePointer);

    return 0;
}

