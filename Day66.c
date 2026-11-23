#include <stdio.h>
void findTwoSum(int nums[], int size, int target) {

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                return; 
            }
        }
    }
    
    printf("-1 -1\n");
}

int main() {
    int nums1[] = {2, 7, 11, 15};
    int size1 = 4;
    int target1 = 9;
    
    printf("Output 1: ");
    findTwoSum(nums1, size1, target1); 

    int nums2[] = {1, 2, 3};
    int size2 = 3;
    int target2 = 10;
    
    printf("Output 2: ");
    findTwoSum(nums2, size2, target2); 

    return 0;
}
