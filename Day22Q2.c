#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    double numerator = 1.0;
    double denominator = 1.0;

    printf("Enter the number of terms (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Error: Please enter a valid positive integer.\n");
        return 1;
    }

   
    for (int i = 1; i <= n; i++) {
       
        if (i == 1) {
            sum = sum + 1.0;
        } else {
            
            numerator = numerator + 2.0;
            denominator = denominator + 2.0;
            
            sum = sum + (numerator / denominator);
        }
    }
    printf("The sum of the series up to %d terms is: %.4f\n", n, sum);

    return 0;
}