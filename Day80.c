#include <stdio.h>

int main() {
    FILE *filePointer;
    char name;
    int roll, marks, n, i;

    // 1. Ask how many student records to store
    printf("Enter number of students: ");
    scanf("%d", &n);

    // 2. Open students.txt in write mode ("w")
    filePointer = fopen("students.txt", "w");
    if (filePointer == NULL) {
        printf("Error: Could not open students.txt for writing.\n");
        return 1;
    }

    // 3. Take input for each student and write to the file
    for (i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%49s", name);
        printf("Roll: ");
        scanf("%d", &roll);
        printf("Marks: ");
        scanf("%d", &marks);

        // Save in space-separated format: Name Roll Marks
        fprintf(filePointer, "%s %d %d\n", name, roll, marks);
    }

    // Close the file after writing
    fclose(filePointer);

    // 4. Reopen students.txt in read mode ("r")
    filePointer = fopen("students.txt", "r");
    if (filePointer == NULL) {
        printf("Error: Could not open students.txt for reading.\n");
        return 1;
    }

    printf("\n--- Stored Student Records ---\n");

    // 5. Read each record (3 items per line) until EOF and print
    while (fscanf(filePointer, "%49s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    // Close the file after reading
    fclose(filePointer);

    return 0;
}
