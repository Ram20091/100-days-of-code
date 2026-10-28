#include <stdio.h>

int main() {
    int size, target, foundIndex = -1;

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

    printf("Enter the element to search for: ");
    scanf("%d", &target);
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            foundIndex = i; 
            break;
        }
    }
    if (foundIndex != -1) {
        printf("Element %d found at index position: %d\n", target, foundIndex);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}