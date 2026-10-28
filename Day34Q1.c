#include <stdio.h>
int main() {
    int size, position, element;

    if (scanf("%d", &size) != 1 || size <= 0) return 1;
    int arr[size + 1];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    if (scanf("%d %d", &position, &element) != 2) return 1;
    for (int i = size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }
    arr[position] = element;
    for (int i = 0; i <= size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}