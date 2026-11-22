#include <stdio.h>
int main() {
    int n;
    int nums[100]; 
    int totalSum = 0;
    int leftSum = 0;
    int pivot = -1; 

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        totalSum = totalSum + nums[i];
    }

    for (int i = 0; i < n; i++) {

        int rightSum = totalSum - leftSum - nums[i];

        if (leftSum == rightSum) {
            pivot = i; 
            break;     
        }

        leftSum = leftSum + nums[i];
    }

    printf("Pivot Index: %d\n", pivot);

    return 0;
}