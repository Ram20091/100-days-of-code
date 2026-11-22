#include <stdio.h>

int main() {
    int n;
    int arr[1000];
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    for (int i = 0; i < n; i++) {
        int nextGreater = -1; 

        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break; 
            }
        }

        if (i == n - 1) {
            printf("%d", nextGreater);
        } else {
            printf("%d, ", nextGreater);
        }
    }
    printf("\n");

    return 0;
}