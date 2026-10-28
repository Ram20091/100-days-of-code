#include <stdio.h>
int main() {
    int matrix[3][3] = {
        {1, 5, 9},
        {4, 2, 6},
        {7, 8, 3}  
    };
    int isDistinct = 1; 
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                isDistinct = 0; 
                break;
            }
        }
        if (isDistinct == 0) {
            break;
        }
    }

    if (isDistinct == 1) {
        printf("The diagonal elements are distinct.\n");
    } else {
        printf("The diagonal elements are not distinct.\n");
    }

    return 0;
}