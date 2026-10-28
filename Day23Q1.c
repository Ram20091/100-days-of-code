#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    double numerator = 2.0;    
    double denominator = 3.0;  

    printf("Enter the number of terms (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Error: Please enter a valid positive integer.\n");
        return 1;
    }
    for (int i = 1; i <= n; i++) {
       
        sum = sum + (numerator / denominator);

        
        numerator = numerator + 2.0;       
        denominator = denominator + 4.0;    
    }
    printf("The sum of the series up to %d terms is: %.4f\n", n, sum);

    return 0;
}