#include <stdio.h>

int main() {
    FILE *filePointer;
    int num, count = 0;
    int sum = 0;
    float average = 0.0;

    // 1. Open numbers.txt in read mode ("r")
    filePointer = fopen("numbers.txt", "r");
    if (filePointer == NULL) {
        printf("Error: Could not open numbers.txt\n");
        return 1;
    }

    // 2. Read integers one by one until EOF
    while (fscanf(filePointer, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    // 3. Close the file
    fclose(filePointer);

    // 4. Calculate average safely (avoid division by zero if file is empty)
    if (count > 0) {
        average = (float)sum / count;
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", average);
    } else {
        printf("No integers found in numbers.txt\n");
    }

    return 0;
}
