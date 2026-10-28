#include <stdio.h>
int main() {
    int size, element;
    if (scanf("%d", &size) != 1 || size <= 0) return 1;
    int arr[size + 1];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
     scanf("%d", &element);

    int i = size - 1;
    while (i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i]; 
        i--;
    }
    arr[i + 1] = element;
    for (int j = 0; j <= size; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}