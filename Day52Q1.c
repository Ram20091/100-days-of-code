#include <stdio.h>

int findCeil(int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;
    int ans = -1; // Default answer if no element >= x exists

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // If arr[mid] >= x, it is a valid candidate.
        // Store the index and search the left half for an earlier occurrence.
        if (arr[mid] >= x) {
            ans = mid;
            high = mid - 1;
        } else {
            // If arr[mid] < x, search the right half.
            low = mid + 1;
        }
    }

    return ans;
}

int main() {
    int n, x;

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the target value x
    printf("Enter the value of x: ");
    scanf("%d", &x);

    int result = findCeil(arr, n, x);
    printf("%d\n", result);

    return 0;
}