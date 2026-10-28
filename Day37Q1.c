#include <stdio.h>
int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},   
        {7, 8, 9}    
    };
    int rowSums[3]; 
    for (int i = 0; i < 3; i++) {
        int current_row_sum = 0; 
        for (int j = 0; j < 3; j++) {
            current_row_sum += matrix[i][j];
        }
        rowSums[i] = current_row_sum;
    }
    printf("Row sums: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", rowSums[i]);
    }
    printf("\n");

    return 0;
}