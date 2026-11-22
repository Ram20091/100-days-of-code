#include <stdio.h>
int main() {
    int n;
    int arr[100]; 
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int prevGreater = -1; 
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater = arr[j];
                break; 
            }
        }
        if (i == n - 1) {
            printf("%d", prevGreater);
        } else {
            printf("%d, ", prevGreater);
        }
    }

    printf("\n");
    return 0;
}
