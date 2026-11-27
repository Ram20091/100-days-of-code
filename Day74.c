#include <stdio.h>

int main() {
    FILE *sourceFile, *destFile;
    char sourceName[100], destName[100];
    int ch; // Use int instead of char to safely detect EOF

    // 1. Take source and destination filenames from the user
    printf("Enter source filename: ");
    scanf("%99s", sourceName);

    printf("Enter destination filename: ");
    scanf("%99s", destName);

    // 2. Open the source file in read mode ("r")
    sourceFile = fopen(sourceName, "r");
    if (sourceFile == NULL) {
        printf("Error: Could not open source file %s\n", sourceName);
        return 1;
    }

    // 3. Open/create the destination file in write mode ("w")
    destFile = fopen(destName, "w");
    if (destFile == NULL) {
        printf("Error: Could not create destination file %s\n", destName);
        fclose(sourceFile); // Close the already opened source file before exiting
        return 1;
    }

    // 4. Read each character from source and write it to destination until EOF
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    // 5. Close both files
    fclose(sourceFile);
    fclose(destFile);

    // 6. Display confirmation message
    printf("File copied successfully to %s\n", destName);

    return 0;
}
