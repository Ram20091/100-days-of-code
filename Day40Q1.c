#include <stdio.h>
#define ROWS 3
#define COLS 3
int main() {
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    printf("Diagonal Traversal: ");
    for (int slice = 0; slice < ROWS + COLS - 1; slice++) {
        for (int i = 0; i < ROWS; i++) {
            int j = slice - i; 
            if (j >= 0 && j < COLS) {
                printf("%d ", matrix[i][j]);
            }
        }
    }
    printf("\n");

    return 0;
}