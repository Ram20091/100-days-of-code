#include <stdio.h>
int findRepeated(int nums[], int size) {
    int seen[1001] = {0};

    for (int i = 0; i < size; i++) {
        int current = nums[i];

        if (seen[current] == 1) {
            return current;
        }

        seen[current] = 1;
    }

    return -1; 
}

int main() {
    
    int nums1[] = {1, 3, 3, 4};
    int size1 = 4;

    int duplicate = findRepeated(nums1, size1);
    printf("Output 1: %d\n", duplicate); 

    return 0;
}
