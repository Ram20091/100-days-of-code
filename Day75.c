#include <stdio.h>

int main() {
    FILE *filePointer;
    char newText;

    // 1. Open the existing file in append mode ("a")
    filePointer = fopen("data.txt", "a");

    // Check if the file opened successfully
    if (filePointer == NULL) {
        printf("Error: Could not open data.txt\n");
        return 1;
    }

    // 2. Take a full line of text from the user
    printf("Enter text to append: ");
    fgets(newText, sizeof(newText), stdin);

    // 3. Append the new text onto a new line at the end of the file
    fprintf(filePointer, "\n%s", newText);

    // 4. Close the file to save changes
    fclose(filePointer);

    // 5. Display confirmation message
    printf("File updated successfully with appended text.\n");

    return 0;
}
