#include <stdio.h>

int main() {
    FILE *filePointer;
    char name[50];
    int age;

    // 1. Open the file in write mode ("w")
    filePointer = fopen("info.txt", "w");

    // Check if the file was created/opened successfully
    if (filePointer == NULL) {
        printf("Error: Could not create the file.\n");
        return 1; // Exit the program with an error code
    }

    // 2. Take input from the user
    printf("Enter Name: ");
    scanf("%49[^\n]", name); // Reads full name including spaces

    printf("Enter Age: ");
    scanf("%d", &age);

    // 3. Write the formatted data to the file
    fprintf(filePointer, "Name: %s\n", name);
    fprintf(filePointer, "Age: %d\n", age);

    // 4. Close the file to save changes properly
    fclose(filePointer);

    // 5. Display confirmation message
    printf("\nFile created successfully! Data written to info.txt\n");

    return 0;
}
