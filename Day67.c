#include <stdio.h>

void mergeSortedArrays(int nums1[], int m, int nums2[], int n) {
    int merged[m + n]; 
    int i = 0;         
    int j = 0;         
    int k = 0;         


    while (i < m && j < n) {
        if (nums1[i] < nums2[j]) {
            merged[k] = nums1[i];
            i++;
        } else {
            merged[k] = nums2[j];
            j++;
        }
        k++;
    }

    while (i < m) {
        merged[k] = nums1[i];
        i++;
        k++;
    }

    while (j < n) {
        merged[k] = nums2[j];
        j++;
        k++;
    }

    for (int x = 0; x < m + n; x++) {
        printf("%d ", merged[x]);
    }
    printf("\n");
}

int main() {
    int nums1[] = {2, 7, 11, 15};
    int m = 4;
    
    int nums2[] = {4, 8, 10};
    int n = 3;

    printf("Output 1: ");
    mergeSortedArrays(nums1, m, nums2, n); 

    return 0;
}
