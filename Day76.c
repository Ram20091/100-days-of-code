#include <stdio.h>

int main() {
    FILE *filePointer;
    char filename;
    char line;

    // 1. Ask the user for the filename
    printf("Enter filename: ");
    scanf("%99s", filename);

    // 2. Try to open the file in read mode ("r")
    filePointer = fopen(filename, "r");

    // 3. Check if the file exists (NULL means it does not exist or cannot be opened)
    if (filePointer == NULL) {
        printf("Error: File '%s' does not exist.\n", filename);
        return 1; // Exit the program early
    }

    // 4. If it exists, display confirmation and print the contents
    printf("File opened successfully.\n");
    while (fgets(line, sizeof(line), filePointer) != NULL) {
        printf("%s", line);
    }

    // 5. Close the file
    fclose(filePointer);

    return 0;
}
