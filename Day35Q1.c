#include <stdio.h>
int main() {
    int size;
    if (scanf("%d", &size) != 1 || size <= 0) return 1;
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int max1 = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max1) {
            max1 = arr[i];
        }
    }
    int max2 = -999999; 
    int found = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] != max1) {
            if (found == 0 || arr[i] > max2) {
                max2 = arr[i];
                found = 1; 
            }
        }
    }

    if (found == 1) {
        printf("%d\n", max2);
    } else {
        printf("No second largest element exists.\n");
    }

    return 0;
}