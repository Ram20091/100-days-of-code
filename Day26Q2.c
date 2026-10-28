#include <stdio.h>

int main() {
   
    int patternSizes[] = {1, 3, 5, 3, 1};
    int totalBlocks = 5;

   
    for (int i = 0; i < totalBlocks; i++) {
        
        
        for (int j = 1; j <= patternSizes[i]; j++) {
            printf("*\n"); 
        }
        if (i < totalBlocks - 1) {
            printf("\n");
        }
    }

    return 0;
}