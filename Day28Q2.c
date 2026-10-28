#include <stdio.h>

int main() {
    int size;

    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &size) != 1 || size <= 0) {
        printf("Error: Invalid array size.\n");
        return 1;
    }

    int arr[size]; 

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element at index %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nThe elements in your array are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
