#include <stdio.h>
int main() {
    int matrix[3][3] = {
        {5, 2, 3},   
        {4, 6, 1},   
        {8, 9, 7}    
    };
    
    int diagonal_sum = 0;
    for (int i = 0; i < 3; i++) {
        diagonal_sum += matrix[i][i];
    }

    printf("Sum of main diagonal elements: %d\n", diagonal_sum); // 5 + 6 + 7 = 18

    return 0;
}