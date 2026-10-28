#include <stdio.h>
int main() {
    int size, position;
    if (scanf("%d", &size) != 1 || size <= 0) return 1;
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    if (scanf("%d", &position) != 1) return 1;
    if (position >= 0 && position < size) {
        for (int i = position; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--; 
    }
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}