#include <stdio.h>
void printFirstNegative(int arr[], int n, int k) {

    for (int i = 0; i <= n - k; i++) {
        int found = 0; 

        for (int j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                printf("%d ", arr[i + j]);
                found = 1;
                break; 
            }
        }

        if (found == 0) {
            printf("0 ");
        }
    }
    printf("\n");
}

int main() {
    int n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter window size k: ");
    scanf("%d", &k);

    printf("Output: ");
    printFirstNegative(arr, n, k);
    return 0;}