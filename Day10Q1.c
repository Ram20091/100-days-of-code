#include <stdio.h>

int main() 
{
    float side1, side2, side3;

    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) {
        
        
        if (side1 == side2 && side2 == side3) {
            printf("It is an Equilateral triangle.\n");
        }
        
        else if (side1 == side2 || side2 == side3 || side1 == side3) {
            printf("It is an Isosceles triangle.\n");
        }
        
        else {
            printf("It is a Scalene triangle.\n");
        }
        
    } 
    else {
        printf("These side lengths cannot form a valid triangle.\n");
    }

    return 0;
}