#include <stdio.h>
int findMissingNumber(int nums[], int n) {

    int expectedSum = n * (n + 1) / 2;

    int actualSum = 0;
    for (int i = 0; i < n; i++) {
        actualSum += nums[i];
    }

    return expectedSum - actualSum;
}

int main() {
    int nums1[] = {0, 3, 2, 4};
    int n = 4; 

    int missing = findMissingNumber(nums1, n);
    printf("Output 1: %d\n", missing); 

    return 0;
}
