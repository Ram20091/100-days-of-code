#include <stdio.h>
int main() {
    int size1, size2;
    if (scanf("%d", &size1) != 1 || size1 <= 0) return 1;
    int arr1[size1];
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }
    if (scanf("%d", &size2) != 1 || size2 <= 0) return 1;
    int arr2[size2];
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }
    int size3 = size1 + size2;
    int mergedArr[size3];

    for (int i = 0; i < size1; i++) {
        mergedArr[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        mergedArr[size1 + i] = arr2[i];
    }
    for (int i = 0; i < size3; i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");

    return 0;
}