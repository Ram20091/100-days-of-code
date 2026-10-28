#include <stdio.h>

int main() {
    int size, k;

    if (scanf("%d", &size) != 1 || size <= 0) return 1;
    int arr[size];

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    if (scanf("%d", &k) != 1) 
    return 1;
    k = k % size;
    int temp[size];

        for (int i = 0; i < size; i++) {
        int newPosition = (i + k) % size;
        temp[newPosition] = arr[i];
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");

    return 0;
}