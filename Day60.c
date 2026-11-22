#include <stdio.h>
int main() {
    int n, k;
    int arr[1000];
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid window size\n");
        return 0;
    }

    for (int i = 0; i <= n - k; i++) {
        int maxVal = arr[i];

        for (int j = 1; j < k; j++) {
            if (arr[i + j] > maxVal) {
                maxVal = arr[i + j];
            }
        }

        printf("%d ", maxVal);
    }
    printf("\n");

    return 0;
}