#include <stdio.h>
#include <math.h> // Needed for the sqrt() function

int main() 
{
    float a, b, c;
    float d, root1, root2;

    printf("Enter values for a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate the discriminant (d)
    d = (b * b) - (4 * a * c);

    // Case 1: Roots are real and different
    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        
        printf("Roots are real and different.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    // Case 2: Roots are real and exactly the same
    else if (d == 0) {
        root1 = -b / (2 * a);
        
        printf("Roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    }
    // Case 3: Discriminant is negative
    else {
        printf("Roots are imaginary (complex numbers).\n");
    }

    return 0;
}