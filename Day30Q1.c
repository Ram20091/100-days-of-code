#include <stdio.h>
int main() {
    int size;
    int evenCount = 0;
    int oddCount = 0;

    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &size) != 1 || size <= 0) {
        printf("Error: Invalid array size.\n");
        return 1;
    }

    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++; 
        } else {
            oddCount++; 
        }
    }
    printf("\nTotal Even elements: %d\n", evenCount);
    printf("Total Odd elements: %d\n", oddCount);

    return 0;
}