#include <stdio.h>

int main() {
    int size, sum = 0;

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
        sum = sum + arr[i];
    }
    printf("Sum of all elements = %d\n", sum);

    return 0;
}