#include <stdio.h>
int main() {
    int n;
    int nums[1000];   
    int answer[1000]; 

    printf("Enter the number of elements: ");
    scanf("%d", &n);


    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < n; i++) {
        int product = 1; 

        for (int j = 0; j < n; j++) {
            
            if (i != j) {
                product = product * nums[j];
            }
        }

        answer[i] = product;
    }

    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i < n - 1) {
            printf(",");
        }
    }
    printf("]\n");

    return 0;
}