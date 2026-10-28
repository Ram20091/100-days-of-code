#include <stdio.h>

int main() {
    int totalRows = 9;
    int stars = 1;

   
    for (int i = 1; i <= totalRows; i++) {

        for (int j = 1; j <= stars; j++) {
            printf("*");
        }
        
        
        printf("\n");
        if (i < 5) {
            stars = stars + 2; 
            stars = stars - 2; 
        }
    }

    return 0;
}