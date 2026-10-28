#include <stdio.h>

int main() {
    int totalRows = 7;
    int spaces = 3;  
    int stars = 1;  

   
    for (int i = 1; i <= totalRows; i++) {
        for (int j = 1; j <= spaces; j++) {
            printf(" ");
        }
        for (int k = 1; k <= stars; k++) {
            printf("*");
        }

        printf("\n");

        
        if (i < 4) {
            spaces = spaces - 1; 
            stars = stars + 2;   
        } else {
            spaces = spaces + 1; 
            stars = stars - 2;   
        }
    }

    return 0;
}