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
        printf("Invalid subarray size\n");
        return 0;
    }

    int maxSum = 0;

    for (int i = 0; i <= n - k; i++) {
        int currentSum = 0;

        for (int j = 0; j < k; j++) {
            currentSum = currentSum + arr[i + j];
        }

        if (i == 0 || currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    printf("%d\n", maxSum);

    return 0;
}
